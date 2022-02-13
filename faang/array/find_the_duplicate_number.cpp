#include "io/io.h"

class Solution
{
public:
    int findDuplicates(vector<int> &nums)
    { //*TC: O(n), SC: O(1)
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[abs(nums[i])] > 0)
                nums[abs(nums[i])] = -nums[abs(nums[i])];
            else
                return abs(nums[i]);
        }

        return -1;
    }
} s;

int main()
{
    io();
    vector<int> nums = {1, 3, 4, 2, 2};
    cout << " Solution: " << s.findDuplicates(nums) << endl;

    return 0;
}
