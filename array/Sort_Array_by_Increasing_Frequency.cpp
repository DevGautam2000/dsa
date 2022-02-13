#include "io/io.h"

class Solution
{
public:
    bool static sortByVal(const pair<int, int> &a,
                          const pair<int, int> &b)
    {
        if (a.second == b.second)
            return a.first > b.first;
        return (a.second < b.second);
    }
    vector<int> frequencySort(vector<int> &nums)
    {
        //*TC: O(), SC: O()

        map<int, int> order;

        for (int i = 0; i < nums.size(); i++)
        {
            order[nums[i]]++;
        }

        vector<pair<int, int>> vec;
        for (auto pr : order)
            vec.push_back(pr);

        sort(vec.begin(), vec.end(), sortByVal);

        vector<int> ans;
        for (int i = 0; i < vec.size(); i++)
        {
            while (vec[i].second > 0)
            {
                ans.push_back(vec[i].first);
                vec[i].second--;
            }
        }
        return ans;
    }
} s;

int main()
{
    io();
    vector<int> nums = {2, 3, 1, 3, 2};
    cout << " Solution: " << endl;
    auto res = s.frequencySort(nums);

    for (auto i : res)
    {
        cout << i << " ";
    }

    return 0;
}
