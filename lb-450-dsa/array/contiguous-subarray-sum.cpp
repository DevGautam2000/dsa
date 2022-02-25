#include "io/io.h"

class Solution{
public:

 int subArraySum(vector<int> nums){ 
    //* TC: O(), SC: O() 

 	int maxSum=0;
 	int currSum=0;
 	for(auto i : nums){
 		currSum = max(i,currSum+i);
 		maxSum = max(maxSum,currSum);
 	}

    return maxSum;
 }   
} s;


int main(){
    io();
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,48};
    cout << " Solution: " << s.subArraySum(nums);


    return 0;
}

