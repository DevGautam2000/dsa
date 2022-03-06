#include "io/io.h"

class Solution {
    int s[100005][2];
public:
    int minimumOperations(vector<int>& nums) {
        memset(s,0,sizeof(s));
        int n=nums.size(),i,j,k,ans=0;
        for(i=0;i<n;i++)
            s[nums[i]][i&1]++;
        for(i=1,j=k=0;i<=100000;i++)
        {
            ans=max(ans,max(s[i][0]+k,s[i][1]+j));
            j=max(j,s[i][0]);
            k=max(k,s[i][1]);
        }
        return n-ans;
    }
}s;

int main(){
    io();
    vector<int> nums = {1,2,2,2,2};
    cout << " Solution: " << s.minimumOperations(nums)  << endl;

    return 0;
}


