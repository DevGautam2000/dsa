#include "io/io.h"

class Solution{
public:

 vector<int> rotateByOneNaive(vector<int> nums){
 	//* TC: O(n), SC: O(1)
 	 int i = 0, j = nums.size()-1; 
     
     while(i != j)
      swap(nums[i++], nums[j]);
   
 	return nums;
 }  

 vector<int> rotateByOne(vector<int> nums){
     //* TC: O(n), SC: O(1) 

 	reverse(nums.begin(),nums.end()); // 5,4,3,2,1
 	reverse(nums.begin()+1,nums.end()); // 5,1,2,3,4 

 	return nums;
 }   
} s;

int main(){
   io();
    
   vector<int> nums = {1,2,3,4,5};
   auto naiveSolution =  s.rotateByOneNaive(nums);
   auto betterSolution = s.rotateByOne(nums);

   console_log(naiveSolution);
   console_log(betterSolution);

  return 0;
}

