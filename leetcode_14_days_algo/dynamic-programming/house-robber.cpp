#include "io/io.h"

class Solution{
public:
	int rob(vector<int>& nums) {

		//* TC: O(n), SC: O(n)

        int n = nums.size();
        int dp[101]={0};
		
        if(n == 0) return 0;        
		if(n == 1) return dp[0];        		
        
        dp[0] = nums[0];        
        dp[1] = max(dp[0], nums[1]);        
        
        for(int i = 2; i < n; i++)
            dp[i] = max(dp[i - 1], dp[i - 2] + nums[i]);
        
        return dp[n - 1];
    } 

    int robConstSpace1(vector<int>& nums) {
        
        //* TC: O(n), SC: O(1)
        if(!nums.size()) return 0;
        int evenHouse=0;
        int oddHouse=0;
        
        for(int i=0; i<nums.size(); i++)
            if(i&1) oddHouse = max(oddHouse+nums[i] , evenHouse);
            else evenHouse = max(evenHouse+nums[i] , oddHouse);
        
        return max(evenHouse, oddHouse);
    }

    int robConstSpace2(vector<int>& nums) {

    	//* TC: O(n), SC: O(1)

        int n = nums.size(), pre = 0, cur = 0;
        for (int i = 0; i < n; i++) {
            int temp = max(pre + nums[i], cur);
            pre = cur;
            cur = temp;
        }
        return cur;
    }
} s;

int main(){
    io();
    vector<int> nums = {1,2,3,1};
    cout << " Solution: " <<  s.rob(nums) << endl;
    cout << " robConstSpace1 Solution: " <<  s.robConstSpace1(nums) << endl;
    cout << " robConstSpace2 Solution: " <<  s.robConstSpace2(nums) << endl;

    return 0;
}

