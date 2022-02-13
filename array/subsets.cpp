#include "io/io.h"

class Solution{
public:

 vector<vector<int>> subsets(vector<int>& nums){    

 		//* TC: O(), SC: O() 
 		vector<vector<int>> ans;
        int n= nums.size();
        
        for(int i=0; i<n; i++){
            for(int j=1; j<n; j++){
                ans.push_back({nums[i],nums[j]});
            }
        }
 		return ans;
 }   

} s;

int main(){
    io();
    cout << " Solution: " << endl;

    vector<int> nums = {1,2,3};

    for (auto v: s.subsets(nums)){
    	display(v);
    	cout<<endl;
    }

    return 0;
}

