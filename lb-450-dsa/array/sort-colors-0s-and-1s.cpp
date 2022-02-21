#include "io/io.h"

class Solution{
public:

 vector<int> sortColors(vector<int> nums){
     //* TC: O(n), SC: O(1) 

 	int c0(0),c1(0),c2(0);

 	for(auto i : nums)
 		i == 2 ? ++c2 : i == 1 ? ++c1 : ++c0;

 	int i=0;
 	while(c0--)
 		nums[i++]=0; 

 	while(c1--)
 		nums[i++]=1; 

 	while(c2--)
 		nums[i++]=2; 

 	return nums;
 } 

 //one pass solution
 //dutch national flag algorithm
 vector<int> sortColorsOnePass(vector<int> nums){
     //* TC: O(n), SC: O(1) 

 	int lo(0),hi(nums.size()-1),mid(0);

 	while(mid<=hi){

 		switch(nums[mid]){
 		case 0:
 		swap(nums[lo++],nums[mid++]);
 		break;
 		
 		case 2:
 		swap(nums[mid],nums[hi--]);
 		break;

 		default: mid++;
 		break;
 		}

 	}

 	

 	
 	
 	return nums;


 	// using bitwise swap [this is slower]
 	// while(mid<=hi){

 	// 	nums[mid] == 0 ?
 	// 	// swap using bitwise : [ (x^=y),(y^=x),(x^=y) ]
 	// 	(nums[lo] ^= nums[mid]) , (nums[mid] ^= nums[lo]) , (nums[lo++] ^= nums[mid++])

 	// 	:

 	// 	nums[mid] == 2 ?
 	// 	(nums[mid] ^= nums[hi]) , (nums[hi] ^= nums[mid]) , (nums[mid] ^= nums[hi--])

 	// 	:

 	// 	mid++;

 	// }

 	
 } 
} s;

int main(){

    io();
    vector<int> nums = {0,1,2,2,1,0,0};
    auto res = s.sortColors(nums);
    cout<<"Solution: "; console::display(res);

    res = s.sortColorsOnePass(nums);
    cout<<"One pass Solution: "; console::display(res);

    return 0;
}

