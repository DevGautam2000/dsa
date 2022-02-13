#include "io/io.h"

class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {

        //TC: O(n) SC:O(1)

        if (nums.size() < 2)
            return nums[0];

        int maxSum = nums[0];
        int curMax = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            curMax = max(nums[i], curMax + nums[i]);
            maxSum = max(maxSum, curMax);
        }
        return maxSum;
    }

    int maxSubArrayBF(vector<int> &nums)
    {
        //TC: O(n2) SC:O(1)
        int sum_outer = INT_MIN;

        for (int i = 0; i < nums.size(); i++)
        {
            int sum_inner = 0;
            for (int j = i; j < nums.size(); j++)
            {

                sum_inner += nums[j];
                // cout << nums[j] << " ";
                sum_outer = max(sum_outer, sum_inner);
            }
            // cout << "= " << sum_inner;
            // cout << endl
            //  << "sum_outer = " << sum_outer << endl;
        }

        return sum_outer;
    }

} s;

int main()
{
    io();
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    // cout << "BF Solution: " << s.maxSubArrayBF(nums) << endl;
    cout << "Linear Solution: " << s.maxSubArray(nums) << endl;

    return 0;
}
