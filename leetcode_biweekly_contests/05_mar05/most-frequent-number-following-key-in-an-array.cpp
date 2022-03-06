#include "io/io.h"

class Solution{
public:

 int mostFrequent(vector<int>& nums, int key) {
        
        map<int,int> mp;
        if(nums[0]==key){
            mp[nums[1]]++;
        }
        for(int i=1;i<nums.size();i++){
            if(nums[i]==key && i+1<nums.size()){
                mp[nums[i+1]]++;
            }
        }
        int ans=INT_MIN,val;
        for(auto i=mp.begin();i!=mp.end();i++){
            if(ans<i->second){
                ans=i->second;
                val=i->first;
            }
        }
        return val;
    } 
} s;

int main(){
    io();
    vector<int> nums = {1,100,200,1,100};
    int key = 1;
    cout << " Solution: " << s.mostFrequent(nums,key)  << endl;

    return 0;
}

