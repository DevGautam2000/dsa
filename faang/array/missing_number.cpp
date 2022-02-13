#include "io/io.h"

class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        //*TC: O(n), SC: O(n)
        int n = nums.size();
        vector<int> count(n); //? using a frequency array

        for (int i = 0; i < n; i++)
            if (nums[i] > 0)
                count[nums[i] - 1]++;
        for (int i = 0; i < count.size(); i++)
            if (count[i] == 0)
                return i + 1;

        return 0;
    }

    int missingNumberConstantSpace(vector<int> &nums)
    {
        //*TC: O(n), SC: O(1)
        int n = nums.size();
        int sum = n * (n + 1) / 2;

        for (auto i : nums)
            sum -= i;

        return sum;
    }
} s;

int main()
{
    io();
    vector<int> nums = {3, 2, 1};
    cout << " Solution: " << s.missingNumberConstantSpace(nums) << endl;

    return 0;
}
