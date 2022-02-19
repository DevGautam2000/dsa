#include "io/io.h"

class Solution{
public:

 int countPairs(vector<int>& nums, int k) {
        int n=nums.size();
        int count=0;
        for(int i=0; i<n; i++)
            for(int j=i+1; j<n; j++)
                if(nums[i]==nums[j] and i*j%k==0)
                    count++;

        return count;
    }
} s;

int main(){
    io();

    vector<int> nums = {3,1,2,2,2,1,3};
    int k = 2;

    cout << " Solution: " << s.countPairs(nums, k);

    return 0;
}

