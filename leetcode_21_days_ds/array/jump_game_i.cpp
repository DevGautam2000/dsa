#include "io/io.h"

class Solution
{
public:
    //*TC: O(N), SC: O(1)
    bool canJump(vector<int> &nums)
    {
        int n = nums.size();
        int maxReach = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (maxReach < i)
                return false;
            maxReach = max(maxReach, nums[i] + i);
        }
        return (maxReach >= n - 1);
    }
} s;

int main()
{
    io();
    cout << " Solution: " << endl;
    vector<int> nums = {2, 3, 1, 1, 4};
    cout << s.canJump(nums) << endl;

    return 0;
}
