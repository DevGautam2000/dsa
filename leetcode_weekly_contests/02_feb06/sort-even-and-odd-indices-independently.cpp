#include "io/io.h"

class Solution{
public:

 vector<int> sortEvenOdd(vector<int>& nums) {
        
        vector<int> small;
        vector<int> big;
        
        for(int i=0;i<nums.size();i++){
            if(i&1)
                small.push_back(nums[i]);
            else
                big.push_back(nums[i]);
        }
        
        sort(small.rbegin(),small.rend());
        sort(big.begin(),big.end());
        
        int j=0,k=0;
        for(int i=0; i<nums.size(); i++)
            if(i&1)
                nums[i]=small[j++];
            
            else
                nums[i]=big[k++];
        
        
        return nums;
    }
} s;

int main(){
    io();
    vector<int> nums = {4,1,2,3};
    cout << " Solution: " << endl;
    auto res = s.sortEvenOdd(nums);
    display(res);

    return 0;
}

