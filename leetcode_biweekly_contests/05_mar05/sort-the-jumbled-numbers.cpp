#include "io/io.h"

class Solution{
public:
    vector<int> sortJumbled(vector<int> &m, vector<int> &nums)
    {
        vector<pair<int, int>> v;

        for (int i = 0; i < nums.size(); i++){
            string s = to_string(nums[i]);
            int n = 0;
            for (int j = 0; j < s.length(); j++)
                n = (n * 10) + m[s[j] - '0'];
            v.push_back(make_pair(n, i));
        }

        sort(v.begin(), v.end());

        vector<int> ans;

        for (int i = 0; i < nums.size(); i++)
            ans.push_back(nums[v[i].second]);
        
        return ans;
    }
}s;
int main(){
    io();
    cout << " Solution: "  << endl;
    vector<int> m={8,9,4,0,2,1,3,5,7,6} ,nums= {991,338,38};
    auto res = s.sortJumbled(m,nums);
    console::display(res);

    return 0;
}

