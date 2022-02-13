#include "io/io.h"

class Solution{

	vector<vector<int>> ans;
	vector<int> ds;
	

public:

  void rePermute(vector<int> nums,vector<int> freq){

  		if(ds.size()==nums.size()){
  			ans.push_back(ds);
  			return; 
  		}

  		//pick a number from array nums
  		for (int i = 0; i < nums.size(); ++i)
  		{
  			if (!freq[i])
  			{
  				ds.push_back(nums[i]);
  				freq[i]=1;

  				rePermute(nums,freq);

  				ds.pop_back();
  				freq[i]=0;
  			}
  		}

  }

  vector<vector<int>> permute(vector<int>& nums){    
  	//* TC: O(n! * n), SC: 2O(n) 
  	vector<int> freq(nums.size(),0);
  	rePermute(nums,freq);

  	return ans;
 }   
} s;

class Solution2{

	vector<vector<int>> ans;

public:

  void rePermute(int index,vector<int> nums){

  		if(index==nums.size()){
  			ans.push_back(nums);
  			return; 
  		}

  		//pick a number from array nums
  		for (int i = index; i < nums.size(); ++i)
  		{
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
} s2;

int main(){
    io();
    cout << " Solution 1: " << endl;

    vector<int> nums = {1,0};


    for (auto vec: s.permute(nums))
    	{
    		display(vec);
    		cout<<endl;
    	}
    cout << "\nSolution 2: " << endl;

	for (auto vec: s2.permute(nums))
    	{
    		display(vec);
    		cout<<endl;
    	}

    return 0;
}

