#include "io/io.h"

class Solution{
public:

 int findDuplicate(vector<int> &nums){  
 	  //* TC: O(n), SC: O(1) 

 	 for (auto &i:nums)
 	 	if(nums[abs(i)] > 0){
            nums[abs(i)] = -nums[abs(i)];

        }
        else return abs(i);
 	 
 	 return -1;
 }   
} s;

int main(){
    io();
    vector<int> nums = {1,3,4,4,2};
    cout << " Solution: " << s.findDuplicate(nums)  << endl;

    return 0;
}

