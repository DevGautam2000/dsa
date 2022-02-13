#include "io/io.h"

class Solution
{
public:
    vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
    {
        //TC: O(n), SC: O(n)
        vector<int> res;
        unordered_map<int, int> freq;
        // push into freq map
        for (int i = 0; i < nums1.size(); i++)
            freq[nums1[i]]++;

        for (int i = 0; i < nums2.size(); i++)
            if (freq[nums2[i]] > 0)
            {
                freq[nums2[i]]--;
                res.push_back(nums2[i]);
            }

        return res;
    }

} s;

int main()
{
    io();
    vector<int> nums1 = {1, 2, 2, 1}, nums2 = {2, 2}, res = {};
    cout << " Solution: " << endl;
    res = s.intersect(nums1, nums2);

    for (auto i : res)
    {
        cout << i << " ";
    }

    return 0;
}
