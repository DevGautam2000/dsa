#include "io/io.h"

class Solution{
public:

 vector<int> countSortForNegativeArray(vector<int> nums){

 	//* TC: O(n+range), SC: O(max_element+small_element) 
 	int largest = *max_element(nums.begin(),nums.end());
 	int smallest = *min_element(nums.begin(),nums.end());

 	//freq vector
 	vector<int> freq(largest+smallest+1,0);


 	//store the freq of each element in nums
 	for (auto i: nums)
 		freq[abs(smallest) + i]++;
 	
 	int k=0;
 	for(int i=0; i<=largest+smallest; i++){


 		//loop for a range
 		while(freq[i]-- > 0){
 			nums[k++] = i+smallest;
 		}
 	}

 	return nums;
 }  

 vector<int> countSortForPositiveArray(vector<int> nums){
     //* TC: O(n+range), SC: O(max_element) 


 	int largest = *max_element(nums.begin(),nums.end());

 	//freq vector
 	vector<int> freq(largest+1,0);


 	//store the freq of each element in nums
 	for (auto i: nums)
 		freq[i]++;
 	
 	int k=0;
 	for(int i=0; i<=largest; i++){


 		//loop for a range
 		while(freq[i]-- > 0)
 			nums[k++] = i;
 		
 	}

 	return nums;
 } 
} s;

int main(){
    io();
    cout << " Solution: " <<  endl;
    vector<int> pos = {1,2,4,8,3,5,8,67};
    auto res = s.countSortForPositiveArray(pos);
    console::display(res);

    vector<int> neg = {1,2,4,-10,-9,8,3,5,8,67};
    res = s.countSortForNegativeArray(neg);
    console::display(res);


    return 0;
}

