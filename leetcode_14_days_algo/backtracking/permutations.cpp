#include "io/io.h"


class Solution {
vector<vector<int>> ans;

public:

  void rePermute(int index,vector<int> nums){

  		if(index==nums.size()){
  			ans.push_back(nums);
  			return; 
  		}
  		for (int i = index; i < nums.size(); ++i){
  			swap(nums[index],nums[i]);
  			rePermute(index+1,nums);
  			swap(nums[index],nums[i]);

  		}

  }

  vector<vector<int>> permute(vector<int>& nums){    
  	//* TC: O(n! * n), SC: O(n) 
  	rePermute(0,nums);
  	return ans;
 }       
} s;

int main(){
    io();
    cout << " Solution: "  << endl;
    vector<int> nums = {1,2,3};
    auto res = s.permute(nums);
    console::display(res);

    return 0;
}

