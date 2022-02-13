#include "io/io.h"

class Solution{
public:

 vector<int> suffixSum(vector<int> nums){ 
    //* TC: O(), SC: O() 

   int n=nums.size();
 	vector<int> ss(n,0);
 	ss[n-1]=nums[n-1];
    for(int i=n-2; i>=0; i--)
    	ss[i] = ss[i+1]+nums[i];

	return ss;

 }   

} s;

int main(){
    io();
    vector<int> nums = {1,2,3,4,5,6,7,8,9};
    cout << " Solution: " << endl;
    auto res = s.suffixSum(nums);

    display(res);

    return 0;
}

