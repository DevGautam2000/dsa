#include "io/io.h"

class Solution{
public:

 vector<int> prefixSum(vector<int> nums){ 
    //* TC: O(), SC: O() 

 	vector<int> ps(nums.size(),0);
 	ps[0]=nums[0];
    for(int i=1; i<nums.size(); i++)
    	ps[i] = ps[i-1]+nums[i];

	return ps;

 }   

} s;

int main(){
    io();
    vector<int> nums = {1,2,3,4,5,6,7,8,9};
    cout << " Solution: " << endl;
    auto res = s.prefixSum(nums);

    display(res);

    return 0;
}

