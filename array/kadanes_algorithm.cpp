#include "io/io.h"

class Solution
{
public:
    int maxSum(vector<int> &nums)
    { //*TC: O(n), SC: O(1)

        int currs = 0;
        int maxs = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            currs = max(0, currs + nums[i]);
            maxs = max(maxs, currs);
        }

        return maxs;
    }
} s;

int main()
{
    io();
    vector<int> nums = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    cout << " Solution: " << s.maxSum(nums) << endl;

    return 0;
}
