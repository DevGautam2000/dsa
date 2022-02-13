#include "io/io.h"

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> map; //take a map

        //[3,3]
        //target  = 6

        for (int i = 0; i < nums.size(); i++) //loop till last element
        {
            int diff = target - nums[i];
            if (map.find(diff) != map.end()) //find in map
                return {map[diff], i};       //return index of diff and  curr index
            map.insert({nums[i], i});        //inset in map
        }
        return {};
    }
};
int main()
{
    io();

    vector<int> nums = {3, 2, 3};
    int target = 6;
    Solution s;
    auto res = s.twoSum(nums, target);
    for (auto i : res)
    {
        cout << i << " ";
    }
    return 0;
}
