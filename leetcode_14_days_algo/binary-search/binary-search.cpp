#include "io/io.h"

class Solution{
public:

int search(vector<int>& nums, int target) {
        
        int beg,end;
        beg =0;
        end = nums.size()-1;
        
        while(beg <= end){
            
            int mid=(beg+end)/2;
            
            if(nums[mid] == target)
                return mid;
            else if(nums[mid] > target)
                end = mid-1;
            else beg=mid+1;
        }
        
        return -1;
    } 
} s;

int main(){
    io();
    vector<int> nums = {1,2,3,4};
    int target=4;
    cout << " Solution: " << s.search(nums,target)  << endl;

    return 0;
}

