#include "io/io.h"

class Solution{
public:

 int numberOfArrays(vector<int>& differences, int lower, int upper) {
     //* TC: O(), SC: O() 

 	int count=0;
 	vector<int> range;
 	for (int i = lower; i <= upper; ++i)
 		range.push_back(i);

 	for (int i = 0; i < differences.size(); ++i)
 	{
 		int target = differences[i];

 		int left=0;
 		int right=range.size()-1;

 		while(left<right){

 			if(range[right]-range[left] == target) count++;

 			left++;
 			right--;
 		}
 	}

 	return count;
 }   
} s;

int main(){
    io();
    vector<int> diff = {1,-3,4};
    int l=1;
    int u = 6;
    cout << " Solution: " << s.numberOfArrays(diff,l,u) << endl;

    return 0;
}

