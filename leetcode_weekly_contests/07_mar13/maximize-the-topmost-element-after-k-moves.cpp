#include "io/io.h"

class Solution{
public:

 int maximumTop(vector<int>& nums, int k) {
       int n=nums.size();
        if(n==0) return -1;
        if(n==1){
            if(k==1) return -1;
            if(k%2==1) return -1;
            else return nums[0];
        }
        int mx=INT_MIN;
        for(int i=0;i<min(n,k-1);i++){
            mx=max(mx,nums[i]);
        }
        if(k<n) mx=max(mx,nums[k]);
        return mx;
    }  
} s;

int main(){
    io();
    vector<int> nums = {5,2,2,4,0,6};
    int k=4;
    cout << " Solution: " <<  s.maximumTop(nums,k) << endl;

    return 0;
}

