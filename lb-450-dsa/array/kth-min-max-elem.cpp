#include "io/io.h"

class Solution{
public:

//simple sorting
 vector<int> kthMinMaxElem(vector<int> nums, int k){
     //* TC: O(nlogn), SC: O(1) 
 	sort(nums.begin(),nums.end());
 	int min = nums[k-1];
 	int max = nums[nums.size()-k];

 	return {min , max};
 }   

//using nth element
 vector<int> kthMinMaxNthElem(vector<int> nums, int k){
     //* TC: O(n), SC: O(1) 
 	nth_element(nums.begin(),nums.begin()+nums.size()-k,nums.end());
 	int min = nums[k-1];
 	int max = nums[nums.size()-k];

 	return {min , max};
 }  

 //using quick select


 vector<int> kthMinMaxQuickSelect(vector<int> nums, int k){
     //* TC: O(n) and O(n^2) for worst case, SC: O(1) 

	//? partition rule: >=pivot   pivot   <=pivot
	int left=0,right=nums.size()-1,idx=0;
	while(1){
		idx = partition(nums,left,right);
		if(idx==k-1) break;
		else if(idx < k-1) left=idx+1;
		else right= idx-1;
	}

	debug(nums);
	return {nums[nums.size()-idx-1],nums[idx]};

 }   

 int partition(vector<int>& nums,int left,int right){
    //! hoare partition

	int pivot = nums[left], l=left+1, r = right;
	while(l<=r){
		if(nums[l]<pivot && nums[r]>pivot) swap(nums[l++],nums[r--]);
		if(nums[l]>=pivot) ++l;
		if(nums[r]<=pivot) --r;
	}
	swap(nums[left], nums[r]);
	return r;
}


//using set
vector<int> kthMinMaxSet(vector<int> nums, int k){
     //* TC: O(logn) and O(n) for worst case, SC: O(1) 
 	
 	set<int> s(nums.begin(),nums.end());
 	set<int> :: iterator it = s.begin();

 	//advance the it to k-1 steps
 	
 	int min = *next(it,k-1);;

 	it=--s.end();
 	int max = *prev(it,k-1);

 	return {min , max};
 }  


} s;

int main(){
    io();
    cout << " Solution: " << endl;
    vector<int> nums = {8,3,1,5,7};
    // 1 3 5 7 8

    int k=3;
    auto res = s.kthMinMaxElem(nums,k);
    cout<<"simple sorting: ";console::display(res);

    res = s.kthMinMaxNthElem(nums,k);
    cout<<"using nth element: ";console::display(res);


    res = s.kthMinMaxSet(nums,k);
    cout<<"using set: ";console::display(res);

    //TODO :res = s.kthMinMaxQuickSelect(nums,k); cout<<"using quick select: ";console::display(res);
    return 0;
}

