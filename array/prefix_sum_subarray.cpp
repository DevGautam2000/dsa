
#include "io/io.h"

class Solution
{
public:
    int largestSubarraySum(vector<int> &nums)
    { //*TC: O(n2), SC: O(n)

        // preprocess the nums array and save the sums accordint to the indices
        int n = nums.size();
        vector<int> prefixArray(n);
        prefixArray[0] = nums[0];

        for (int i = 1; i < n; i++)
            prefixArray[i] = prefixArray[i - 1] + nums[i];

        int largestSum = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                int sum = i > 0 ? prefixArray[j] - prefixArray[i - 1] : prefixArray[j];
                largestSum = max(largestSum, sum);
            }
        }

        return largestSum;
    }
} s;

int main()
{
    io();
    vector<int> nums = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    cout << " Solution: " << s.largestSubarraySum(nums) << endl;

    return 0;
}
