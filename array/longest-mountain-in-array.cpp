#include "io/io.h"

class Solution{
public:

 int lengthOfMountain(vector<int> nums){
     //* TC: O(), SC: O() 

 	int dist=0;
 	int n=nums.size();


 	for(int i=1; i<n-1; ){

 		if(nums[i-1]<nums[i] and nums[i]>nums[i+1]){
 			//? this is a peak

 			//left distance
 			int distOfPeak=1; //distance fora peak element is one
 			int j=i;

 			while(j and nums[j]>nums[j-1])
 				distOfPeak++,j--;

 			//right distance
 			while(i<n-1 and nums[i]>nums[i+1])
 				distOfPeak++,i++;
 			
 			dist = max(dist,distOfPeak);
 		}
 		else i++;
 	}

 	return dist;

 }   
} s;

int main(){
    io();

    vector<int> nums = {5,6,1,2,3,4,5,4,3,2,0,1,2,3,-2,4};
    cout << " Solution: " <<  s.lengthOfMountain(nums) << endl;

    return 0;
}

