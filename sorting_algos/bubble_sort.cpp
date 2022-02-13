#include "io/io.h"

class Solution{
public:

 vector<int> bubbleSort(vector<int> &nums){  
   //* TC: O(n2), SC: O(1) 
 	int n=nums.size();
 	for(int i=0; i<n; ++i)
 		for (int j = 0; j < n-i-1; ++j)
 			if(nums[j]>nums[j+1])
 				 swap(nums[j],nums[j+1]);
 		

 	return nums;
 }   
} s;



int main(){
    io();
    cout << " Solution: " <<  endl;
	vector<int> nums = {1,2,4,-10,9,8,3,5,8,67};
    auto res = s.bubbleSort(nums);
    console::display(res);

    return 0;
}

