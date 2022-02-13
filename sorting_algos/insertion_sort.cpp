#include "io/io.h"

class Solution{
public:

 vector<int> insertionSort(vector<int> nums){ 
    //* TC: O(), SC: O() 

	    for(int i=1; i<nums.size(); i++){

	    	int curr=nums[i]; //curr value;
	    	int prev=i-1;

	    	while(prev >= 0 and nums[prev] > curr )
	    		nums[prev+1] = nums[prev], prev--;

	    	//add the curr element to the vacant place
	    	nums[prev+1] = curr;
	 	}   

	 	return nums;
    }
} s;

namespace loop{
	void fori(int start,int end){

			for(int i=start;i<end; i++){
				cout<<i<<" ";
			}
	}
}

int main(){
    io();
    cout << " Solution: " <<endl;
    vector<int> nums = {1,2,4,-10,9,8,3,5,8,67};
    auto res = s.insertionSort(nums);
    display(res);

    return 0;
}

