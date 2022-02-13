#include "io/io.h"

class Solution{
public:
 bool outOfOrder(vector<int> a,int i){

 	//edge cases
 	int num = a[i];
 	if(i==0)
 		return num > a[1];
 	if(i==a.size()-1)
 		return num < a[a.size()-2];

 	return num > a[i+1] or num<a[i-1];
 }

 vector<int> subarrayToBeSorted(vector<int> nums){
     //* TC: O(), SC: O() 

 	vector<int> ans;
 	int smallest=INT_MAX;
 	int largest=INT_MIN;


 	for(int i=0; i<nums.size(); i++){

 		// if the element id out of order or not
 		if(outOfOrder(nums,i)){
 			smallest=min(smallest,nums[i]);
 			largest=max(largest,nums[i]);
 		}
 	}

 	if(smallest==INT_MAX) //if the array is already sorted
 			return {};

	//! move the pointers to correct indices
 	int left=0;
 	while(smallest >= nums[left])
 		left++;

 	int right=nums.size()-1;
 	while(largest <= nums[right])
 		right--;


 	//push back the subarray not sorted
 	for(int i=left; i<=right; i++)
 		ans.push_back(nums[i]);

 	return ans;
 }   
} s;

int main(){
    io();
    cout << " Solution: "<< endl;
    vector<int> nums ={0,1,2,19,6,7,13,18,21};
    auto res = s.subarrayToBeSorted(nums);
    display(res);

    return 0;
}

