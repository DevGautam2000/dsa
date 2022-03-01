#include "io/io.h"

class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
         //* TC: O(n), SC: O(1)
        int res = 0;
        for (auto i : nums)
            res ^= i;

        return res;
    }
} s;

int main()
{
    io();
    vector<int> nums = {4, 1, 2, 1, 2};
    cout << "Solution: " << s.singleNumber(nums) << endl;

    return 0;
}
