#include "io/io.h"

class Solution
{
public:
    vector<int> majorityElement(vector<int> &nums)
    {
        //*TC: O(n), SC: O(n)
        unordered_map<int, int> map;
        vector<int> res;
        int n = nums.size();

        for (auto i : nums)
            map[i]++;

        for (auto i : map)
            if (i.second > n / 3)
                res.push_back(i.first);

        return res;
    }
} s;

int main()
{
    io();
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
    cout << " Solution: " << endl;
    display(s.majorityElement(nums));

    return 0;
}
