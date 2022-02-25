#include "io/io.h"

class Solution{
public:

  int maxSubArray(vector<int>& nums) {
      //* TC: O(n), SC: O(1)

  	int maxSum=nums[0],curr=nums[0];


  	for (int i = 1; i < nums.size(); ++i){
      auto s=curr+nums[i];
  		curr  = max(nums[i],s);
  		maxSum= max(maxSum,curr);
  	}

  	return maxSum;
 }   
} s;

int main(){
    io();
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    cout << " Solution: " <<  s.maxSubArray(nums) << endl;

    return 0;
}

