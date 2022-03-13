#include "io/io.h"

class Solution{
public:
vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        
        vector<int> keys;
        int ind=0;
        for(auto i: nums){
            if(i==key)
                keys.push_back(ind);
            ind++;
        }
        
        
        set<int> ans;
        for(auto i=0; i<nums.size(); i++)
            for(auto key : keys)
                if(abs(i - key) <= k)
                    ans.insert(i);
        
        
        return vector<int>(ans.begin(),ans.end());
    }  
} s;

int main(){
    io();
    vector<int> nums = {3,4,9,1,3,9,5};
	int key=9, k=1;
    cout << " Solution: " << endl;
    auto res =s.findKDistantIndices(nums,key,k);
    console::display(res);

    return 0;
}

