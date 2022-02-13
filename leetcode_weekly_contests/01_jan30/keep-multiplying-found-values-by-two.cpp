#include "io/io.h"

class Solution{
public:

 int findFinalValue(vector<int>& nums, int original) {
        
        int curr = original;
        sort(nums.begin(),nums.end());
        for(auto i : nums){
            if(curr == i)
                curr *= 2;
        }
        
        return curr;
    }  
} s;

int main(){
    io();
    vector<int> nums = {5,3,6,1,12};
    int original = 3;
    cout << " Solution: " << s.findFinalValue(nums,original) <<endl;

    return 0;
}

