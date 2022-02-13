#include "io/io.h"

class Solution{
public:

 bool increasingTriplet(vector<int>& nums) {
        //TC : O(n) ,SC: O(1)
        int sm=INT_MAX,big=INT_MAX;
        
        for(auto i: nums){
            if(i<=sm) sm=i;
            else if(i<=big) big=i;
            else {
            	// cerr<<sm<<" "<<i<<" "<<big<<endl;
            	return true;
            }
            
        }
        
        return false;
    } 


 bool increasingTriplet2(vector<int>& nums) {
        //TC : O(n) ,SC: O(n)
        vector<int> lmin,rmax;

        int mn = nums[0];
        for(auto i: nums){
        	mn = min(mn,i);
        	lmin.push_back(mn);
        }

        int mx = nums[nums.size()-1];
        for(int i=nums.size()-1; i>=0; i--){
        	mx = max(mx,nums[i]);
        	rmax.push_back(mx);
        }

        for(int i=0; i<nums.size(); i++){
        	if(lmin[i]<nums[i] && nums[i]<rmax[i]){
        	// cerr<<lmin[i]<<" "<<nums[i]<<" "<<rmax[i]<<endl;
        	 return true;
        	}
        }
        

        return false;
    } 
} s;

int main(){
    io();
    vector<int> nums = {20,100,10,12,5,13};
    cout << " Solution: " << boolify(s.increasingTriplet(nums))  << endl;
    cout << " Solution2: " << boolify(s.increasingTriplet2(nums))  << endl;

    return 0;
}

