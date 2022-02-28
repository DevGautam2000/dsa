#include "io/io.h"

class Solution{
public:

 int arraySign(vector<int>& nums) {
        //* TC: O(n), SC: O(1)
        int cNeg=0;
        for(auto i: nums)
            if(i==0) return 0;
            else if(i<0) cNeg++;
        
        return cNeg&1 ? -1 :1;
    }
} s;

int main(){
    io();
    vector<int> nums = {-1,-2,-3,-4,3,2,1};
    cout << " Solution: " << s.arraySign(nums)  << endl;

    return 0;
}

