#include "io/io.h"

class Solution{
public:

 vector<int> runningSum(vector<int>& nums) {
        vector<int> runSum(nums.size());
        runSum[0]=nums[0];
        
        for(int i=1; i<nums.size(); i++){
            runSum[i] = runSum[i-1]+nums[i];
        }
        
        return runSum;
    }   
} s;

int main(){
    io();
    vector<int> nums = {1,2,3,4};
    cout << " Solution: " ;
    auto res = s.runningSum(nums);
    console::display(res)

    return 0;
}

