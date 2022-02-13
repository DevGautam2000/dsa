#include "io/io.h"

class Solution{
public:

 vector<int> selectionSort(vector<int> nums){
     //* TC: O(n2), SC: O(1) 

 	int n=nums.size();
 	for(int i=0;i <n-1; i++){
 		int minPos=i;

 		for(int j=i+1 ;j<n ;j++)
 			if(nums[j] < nums[minPos])
 				minPos=j;

 		swap(nums[i],nums[minPos]);
 	}

 	return nums;
 }   
} s;

int main(){
    io();
    cout << " Solution: " << endl;
    vector<int> nums = {1,2,4,9,8,3,5,8,67};
    auto res = s.selectionSort(nums);
    console::display(res);

    return 0;
}

