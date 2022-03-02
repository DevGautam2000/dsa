#include "io/io.h"

class Solution{
public:

 int getMinDiff(vector<int> &nums, int k){ 
    //* TC: O(nlogn), SC: O(1) 

 	int n=nums.size();
 	sort(nums.begin(),nums.end());

    int minDiff = nums.back()-nums.front();

    int mn=nums.front() , mx=nums.back();
    for(int i=1; i<nums.size(); i++){

    	mn=min(nums.front()+k,nums[i]-k);
    	mx=max(nums[i-1]+k,nums.back()-k);

    	minDiff = min(minDiff,mx-mn);
    }

    return minDiff;
 }   
} s;

int main(){
    io();
    int k = 6;
    vector<int> nums = { 3,5,4,9 };
    cout << " Solution: " << s.getMinDiff(nums, k) << endl;
    return 0;
}

