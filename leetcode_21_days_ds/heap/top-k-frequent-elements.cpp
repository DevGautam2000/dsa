#include "io/io.h"

class Solution{
public:

 vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        map<int,int>m;
        priority_queue<pair<int,int>> pq; 
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]+=1;
        }
        for(auto it:m)
            pq.push({it.second,it.first});
        for(int i=1;i<=k;i++)
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        
        return ans;
    }   
} s;

int main(){
    io();
    cout << " Solution: " << endl;

    vector<int> nums = {1,1,1,2,2,3};
    int k = 2;
    auto res = s.topKFrequent(nums , k);

    display(res);

    return 0;
}

