#include "io/io.h"

class Solution
{
public:
    vector<int> findDuplicates(vector<int> &nums)
    {
        //*TC: O(n), SC: O(n)

        int n = nums.size();
        if (n < 2)
            return {};

        vector<int> dups;
        vector<int> dupsCount(n); //? using a frequency array

        for (int i = 0; i < nums.size(); i++)
            dupsCount[nums[i] - 1]++;
        for (int i = 0; i < dupsCount.size(); i++)
            if (dupsCount[i] > 1)
                dups.push_back(i + 1);
        return dups;
    }
} s;

int main()
{
    io();
    vector<int> nums = {1, 3, 3, 4};
    cout << " Solution: " << endl;
    auto res = s.findDuplicates(nums);
    for (auto i : res)
        cout << i << " ";

    return 0;
}
