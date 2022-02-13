#include "io/io.h"

class Solution{
public:

 vector<int> decompressRLElist(vector<int>& nums) {
        
        //* TC: O(n+m), SC: O(n)
        vector<int> res;
        
        for(int i=0; i<nums.size()-1; i+=2)     
            res.insert(res.end(),nums[i],nums[i+1]);
            
        return res;
    }  
} s;

int main(){
    io();
    cout << " Solution: " << endl;
    vector<int> nums = {1,2,3,4};

    display(s.decompressRLElist(nums));

    return 0;
}

