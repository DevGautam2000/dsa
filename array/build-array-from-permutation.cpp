#include "io/io.h"

class Solution{
public:

 vector<int> buildArray(vector<int>& nums) {

 		//* TC: O(n), SC: O(n)
     
     	vector<int> ans(nums.size());   

     	for (int i = 0; i < nums.size(); ++i)
     		ans[i] = nums[nums[i]];


     	return ans;
    }
 vector<int> buildArrayInPlace(vector<int>& nums) {

 		//* TC: O(n), SC: O(1)
 		//? [0,2,1,5,3,4]
 		//? [0,1,2,4,5,3]
      
 		int n=nums.size();
     	for(auto &i:nums)
            i += n*(nums[i]%n);
        
        for(auto &i:nums)
            i /= n;

     	return nums;
    }
} s;

int main(){
    io();

    vector<int> nums = {0,2,1,5,3,4};
    cout << " Solution: " << endl;
    display(s.buildArray(nums));
	
	cout << "\nIn place Solution: " << endl;
    display(s.buildArrayInPlace(nums));

    return 0;
}

