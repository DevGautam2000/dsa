#include "io/io.h"

class Solution{
public:

 vector<int> sortedSquares(vector<int>& nums) {
    
    //* TC: O(n), SC: O(n)

        int left=0;
        int right = nums.size()-1;
        vector<int> ans(right+1);
        
        for(int i=right; i>=0; i--){
            
            if(abs(nums[left]) > abs(nums[right]))
                ans[i] = pow(nums[left++],2);
            else
                ans[i] = pow(nums[right--],2);
        }
        return ans;
    }  
} s;

int main(){
    io();
    cout << " Solution: " << endl;
    vector<int> nums ={-4,-1,0,3,10};
    auto res = s.sortedSquares(nums);
    display(res);

    return 0;
}

