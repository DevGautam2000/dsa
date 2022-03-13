
#include "io/io.h"

class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {

        unordered_set<int> dups;

        for (int i = 0; i < nums.size(); i++)
        {
            if (dups.count(nums[i]))
                return true;
            dups.insert(nums[i]);
        }

        return false;
    }
} s;

int main()
{
    //*TC: O(), SC: O()
    io();
    vector<int> nums = {1, 2, 3, 1};
    cout << " Solution: " 
    <<debugger::boolify( s.containsDuplicate(nums)) << endl;

    return 0;
}
