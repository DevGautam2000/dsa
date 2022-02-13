#include "io/io.h"

class Solution
{
public:
    int maxAreaBruteForce(vector<int> &height)
    {

        // brute force solution
        int area = 0;
        int count = height.size();
        for (int i = 0; i < count; i++)
        {
            for (int j = i + 1; j < count; j++)
            {
                int h = min(height[i], height[j]); //get the min of both the heights
                int w = j - i;                     //get the distance between both the pillars

                int a = (h * w);         //calc the area;
                area = max(area, h * w); //compare the area
            }
        }

        return area;
    }

    int maxArea(vector<int> &height)
    {

        //TC: O(n)

        // two  pointer approach
        int p1 = 0;
        int p2 = height.size() - 1;
        int area = 0;

        /* for the linear approach the cases that have 
        smaller heights for a particular pillar is ignored as the 
        best ans will be maxwidth * height of a pillar 
        
        
        */
        while (p1 < p2)
        {
            int lh = height[p1];
            int rh = height[p2];
            int min_h = min(lh, rh);     //get min of both the heights
            int w = p2 - p1;             //get the width
            area = max(area, min_h * w); //max area

            if (lh > rh)
                p2--;
            else
                p1++;
        }

        return area;
    }

} s;

int main()
{
    io();
    //Input: height = [1,8,6,2,5,4,8,3,7]
    // Output: 49
    vector<int> height = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    cout << "Brute Force Solution: " << s.maxAreaBruteForce(height) << endl;
    cout << "Solution: " << s.maxArea(height) << endl;

    return 0;
}
