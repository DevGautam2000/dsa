#include "io/io.h"

class Solution{
public:

vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        int n = nums.size();
        
        ans.push_back({});
        
        for(int i=0; i<n; i++)
        {
            int sz = ans.size();
            for(int j=0; j<sz; j++)
            {
                vector<int> temp = ans[j];
                temp.push_back(nums[i]);
                ans.push_back(temp);

                out(temp);
                out(ans);
            }
        }
        
        return ans;
    }  

} s;

int main(){
    io();
    cout << " Solution: " << endl;

    vector<int> nums = {1,2,3};

    for (auto v: s.subsets(nums)){
    	display(v);
    	cout<<endl;
    }

    return 0;
}

