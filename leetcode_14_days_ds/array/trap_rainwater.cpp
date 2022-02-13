#include "io/io.h"

class Solution
{
public:
    int mostWaterBF(vector<int> &height)
    {
        //base condition
        if (height.size() < 3)
            return 0;

        int width = 1;
        int sum = 0;
        for (int i = 0; i < height.size(); i++)
        {

            int leftp = i;
            int rightp = i;
            int maxHL = 0;
            int maxHR = 0;

            //for height[0] = 0

            while (leftp >= 0)
            {
                maxHL = max(maxHL, height[leftp]);
                leftp--;
            }
            while (rightp < height.size())
            {
                maxHR = max(maxHR, height[rightp]);
                rightp++;
            }

            int waterlevel = min(maxHR, maxHL);
            int a = (waterlevel - height[i]) * width;

            sum += a;
        }
        return sum;
    }

    int mostWater(vector<int> &height)
    {
        //using array preprocessing
        // TC: O(n), SC: O(n)
        //base condition
        if (height.size() < 3)
            return 0;

        map<int, int> waterlevel;
        int n = height.size();
        int maxL[n];
        int maxR[n];

        // for left

        //get the leftmost heighest block for each index
        maxL[0] = height[0];
        for (int i = 1; i < n; i++)
            maxL[i] = max(maxL[i - 1], height[i]);

        // for right
        //get the rightmost heighest block for each index
        maxR[n - 1] = height[n - 1];
        for (int i = n - 2; i >= 0; i--)
            maxR[i] = max(maxR[i + 1], height[i]);

        //calc the sum of the water trapped at each index
        int sum = 0;
        for (int i = 0; i < n; i++)
            sum += min(maxL[i], maxR[i]) - height[i];

        return sum;
    }

} s;

int main()
{
    io();
    vector<int> height = {5, 4, 1, 2};
    // cout << "Brute Force Solution: " << s.mostWaterBF(height) << endl;
    cout << "Linear Solution:\n"
         << s.mostWater(height) << endl;

    return 0;
}
