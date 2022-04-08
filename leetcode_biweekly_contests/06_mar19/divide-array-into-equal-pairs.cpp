#include "io/io.h"

class Solution{
public:

 bool divideArray(vector<int>& nums) {
        
        vector<int> freq(501,0);
        
        for(auto i :nums)
            freq[i]++;
            
        for(auto i: freq)
            if(i&1) return false;
            
        return true;
    } 
} s;

int main(){
    io();
    vector<int> nums = {3,2,3,2,2,2};
    cout << " Solution: " << debugger::boolify(s.divideArray(nums))  << endl;

    return 0;
}

