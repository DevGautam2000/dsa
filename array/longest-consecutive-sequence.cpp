#include "io/io.h"

class Solution{
public:

 vector<int> longestband(vector<int> nums){
     //* TC: O(n), SC: O(n)

 	vector<int> ans;
 	unordered_set<int> uniq(nums.begin(),nums.end()); //for lookup

 	for(int i=0; i<nums.size()-1; i++){ //takes n

 		vector<int> temp;
 		if(uniq.find(nums[i]-1) == uniq.end()){
 			temp.push_back(nums[i]);

 			// find the chain
 			int next = nums[i]+1;
 			while(uniq.find(next)!=uniq.end()){ //takes n for some values
 					temp.push_back(next++);
 			}

 			if(temp.size()>ans.size()){
 				ans=temp;
 			}
 		}

 	}

 	return ans;
 }   

 int longestConsecutive(vector<int>& nums) {
         //* TC: O(n), SC: O(n)
    int length=0;
    unordered_set<int> uniq(nums.begin(),nums.end()); //for lookup

    for(auto n: nums){ //takes n

        if(uniq.count(n-1)) continue;
            
        int cnt=1;
        // find the chain
        int next = n+1;
        while(uniq.count(next)) //takes n for some values
            cnt++,next++;
            
        length=max(length,cnt);

    }

    return length;
    }
} s;



int main(){
    io();
    cout << " Solution: " << endl;
    vector<int> nums = {0,1,2,5,4,6,7,12,13,18,21};
    auto res = s.longestband(nums);
    log(s.longestConsecutive(nums));
    log(res);

    // console::log(3);

    return 0;
}

