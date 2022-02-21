#include "io/io.h"

class Solution{
public:

 //partition process : quick sort
 vector<int> moveElements(vector<int> nums){

 	int j=0;
 	for(int i=0; i<nums.size(); i++)
 		if(nums[i] < 0 and i != j)
 			swap(nums[i],nums[j++]);

 	return nums;
 }  

 //dutch national flag algorithm
 vector<int> moveElementsDutchNationalAlgo(vector<int> nums){

 	int lo(0),hi(nums.size()-1);

 	while(lo<=hi)
 		if(nums[lo]<0) lo++;
 		else swap(nums[lo],nums[hi--]);

 	return nums;
 }  



} s;

int main(){
    io();
    cout << "Solution: ORDER DOES NOT MATTER" ;elx(2);
	vector<int> nums = {-12,11,-13,-5,6,-7,5,-3,-6};
    auto res = s.moveElements(nums);
    cout<<"partition process \n";console::display(res);el;

    res = s.moveElementsDutchNationalAlgo(nums);
    cout<<"Dutch national flag\n";console::display(res);el;
    return 0;
}

