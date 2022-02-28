#include "io/io.h"

class Solution{
public:

 int largestPerimeter(vector<int>& nums) {
        //* TC: O(nlogn), SC: O(1)
        sort(nums.rbegin(), nums.rend());
        
        for(int i=0; i<nums.size()-2; i++)
            if(nums[i] < nums[i+1] + nums[i+2]) 
                return (nums[i+1] + nums[i+2]+ nums[i]);
        
        return 0;
    }   
} s;

int main(){
    io();
    vector<int> nums = {1,2,1};
    cout << " Solution: " <<  s.largestPerimeter(nums) << endl;
    return 0;
}

