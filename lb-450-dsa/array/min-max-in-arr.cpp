#include "io/io.h"

class Solution{
public:

 vector<int> minMaxArrElem(vector<int> &nums){  
   //* TC: O(n), SC: O(1) 
  int min = nums[0];
  int max = nums[nums.size()-1];

   	for(int i=0; i<nums.size(); i++){
        min = min > nums[i] ? nums[i] : min;
        max = max < nums[i] ? nums[i] : max;
    } 
 
    return {min,max};
  }
} s;

int main(){
    io();
    vector<int> nums = {23,4,56,7};
    cout << " Solution: "  << endl;
    auto res = s.minMaxArrElem(nums);
    console::display(res);

    return 0;
}

