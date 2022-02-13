#include "io/io.h"

class Solution
{
public:
    int findKthLargest(vector<int> &nums, int k)
    {
        //*TC: O(n), SC: O(1)
        sort(nums.rbegin(), nums.rend());
        return nums[k - 1];
    }
} s;

int main()
{
    io();
    vector<int> nums = {3, 2, 3, 1, 2, 4, 5, 5, 6};
    int k = 4;
    cout << " Solution: " << s.findKthLargest(nums, k) << endl;

    return 0;
}
