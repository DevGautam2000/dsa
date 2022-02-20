#include "io/io.h"

class Solution{
public:

 void reverseArr(vector<int> &nums){  
   //* TC: O(n)/2, SC: O(1) 

 	for(int i=0; i<nums.size()/2; i++)
 		swap(nums[i],nums[nums.size()-i-1]);
 }   
} s;

int main(){
    io();
    vector<int> nums = {23,4,56,7};
    cout << " Solution: "  << endl;
    s.reverseArr(nums);
    console::display(nums);

    return 0;
}

