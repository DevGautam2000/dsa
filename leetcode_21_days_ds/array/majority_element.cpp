#include "io/io.h"

class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        //*TC: O(n), SC: O(n)
        unordered_map<int, int> map;
        int n = nums.size();

        for (auto i : nums)
            map[i]++;
        for (auto i : map)

        {
            if (i.second > n / 2)
                return i.first;
        }

        return -1;
    }

    int majorityElementConstantSpace(vector<int> &nums)
    {
        return -1;
    }
} s;

int main()
{
    io();
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
    cout << " Solution: " << s.majorityElement(nums) << endl;
    cout << " 2nd Solution: " << s.majorityElementConstantSpace(nums) << endl;

    return 0;
}
