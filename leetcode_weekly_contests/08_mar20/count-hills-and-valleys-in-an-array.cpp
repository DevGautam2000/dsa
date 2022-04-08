#include "io/io.h"

class Solution{
public:

 int countHillValley(vector<int>& nums) {

        vector<int> v;
        v.push_back(nums[0]);
        
        for(int i=1;i<nums.size();i++)
            if(nums[i-1]!=nums[i])
                v.push_back(nums[i]);
           

        int hill_vall=0;
        for(int i=1;i<v.size()-1;i++){
           
            if(v[i-1]<v[i] && v[i+1]<v[i])
                hill_vall++;
            else if(v[i-1]>v[i] && v[i+1]>v[i])
                hill_vall++;
        }
        return hill_vall;
    }  
} s;

int main(){
    io();
    vector<int> nums = {2,4,1,1,6,5};
    cout << " Solution: " << s.countHillValley(nums) << endl;

    return 0;
}

