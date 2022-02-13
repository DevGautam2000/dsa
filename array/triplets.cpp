#include "io/io.h"

class Solution
{
public:
    vector<vector<int>> triplets(vector<int> nums, int target)
    { //*TC: O(n2), SC: O(1)
        if (nums.size() < 3)
            return {};
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());

        for (int i = 0; i <= nums.size() - 2; i++)
        {
            int diff = 0 - nums[i];
            int f = nums[i + 1];
            int r = nums[nums.size() - 1];

            while (f <= r)
            {
                int sum = r + f;
                if (sum == diff)
                {
                    res.push_back({nums[i], f, r});
                    break;
                }
                else if (sum < diff)
                    f++;
                else
                    r--;
            }
        }

        return res;
    }

} s;

int main()
{

    io();
    cout << " Solution: " << endl;
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    int target = 0;
    auto res = s.triplets(nums, target);
    for (auto i : res)
    {
        display(i);
        cout << endl;
    }

    return 0;
}
