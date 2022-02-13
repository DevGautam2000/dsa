#include "io/io.h"

class Solution {
    
public:
    void nextPermutation(vector<int>& nums) {
        
       //* TC: O(n), SC: O(1)
        int t,tpp;

        for(t=nums.size()-2; t>=0; t--)
               if(nums[t] < nums[t+1]) break;

        if(t>=0) {
            for(tpp=nums.size()-1 ; tpp>t ; tpp--)
                if(nums[tpp] > nums[t])  break;
            
            swap(nums[t],nums[tpp]);
            reverse(nums.begin()+t+1,nums.end());
        }else
        reverse(nums.begin(),nums.end());
        
    }
}s;

int main(){
    io();
    cout << " Solution: "  << endl;
    vector<int> nums={1,3,2};
    s.nextPermutation(nums);

    display(nums);
    return 0;
}

