#include "io/io.h"

class Solution
{
public:
    int singleNumberMethod1(vector<int> &nums)
    {
        //*TC: O(n), SC: O(k)
        unordered_map<int, int> freq;

        for (int i : nums)
            freq['a' - i]++;

        for (auto i : freq)
            if (i.second == 1)
                return 'a' - i.first;

        return nums[0];
    }

    int singleNumberMethod2(vector<int> &nums)
    {
        //*TC: O(nlogn), SC: O(1)
        sort(nums.begin(), nums.end());
        int i = 0;
        if (nums.size() > 1)
            for (; i < nums.size() - 2; i += 2)
                if (nums[i] != nums[i + 1])
                    return nums[i];

        return nums[i];
    }
} s;

int main()
{
    io();
    vector<int> nums = {4, 1, 2, 1, 2};
    cout << " singleNumberMethod1 Solution: " << s.singleNumberMethod1(nums) << endl;
    cout << " singleNumberMethod2 Solution: " << s.singleNumberMethod2(nums) << endl;

    return 0;
}
