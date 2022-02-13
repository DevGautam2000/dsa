#include "io/io.h"

class Solution{
public:

 int searchInsert(vector<int>& nums, int target) {
        
        int lo=0, hi=nums.size()-1;
        int mid=-1;
        
        while(lo<=hi){
            mid = lo+(hi-lo)/2;
            
            if(nums[mid] == target)
                return mid;
            else if(nums[mid] < target)
                lo = mid+1;
            else 
                hi= mid-1;
            
        }
        
        return lo;
    }
} s;

int main(){
    io();
    vector<int> nums = {1,2,3,4};
    int target=5;
    cout << " Solution: " <<  s.searchInsert(nums,target) << endl;

    return 0;
}

