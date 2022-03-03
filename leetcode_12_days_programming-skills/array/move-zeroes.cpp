#include "io/io.h"

class Solution{
public:

 void moveZeroes(vector<int>& nums) {
     //* TC: O(n), SC: O(1) 
	//two pointer approach
        
        int indexp = 0;
        for (int i = 0; i < nums.size(); i++) {

          if (nums[i] && !nums[indexp])
            nums[indexp++] = nums[i], nums[i] = 0;

          if (nums[indexp])
            indexp++;
        }
 }   
} s;

int main(){
    io();
    vector<int> nums = {1};
    s.moveZeroes(nums);
    cout << " Solution: " ;console::display(nums); 

    return 0;
}

