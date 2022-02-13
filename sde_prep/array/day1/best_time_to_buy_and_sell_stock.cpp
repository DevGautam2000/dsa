#include "io/io.h"

class Solution{
public:

 int maxProfit(vector<int> &prices){ 

		//* TC: O(n), SC: O(1) 
 		int n = prices.size()-1;
 		int min_till_now=prices[0];
 		int maxp=INT_MIN;

 		for (int i = 0; i < n; ++i)
 		{
 			min_till_now = min(min_till_now,prices[i]);
 			maxp = max(maxp,prices[i]-min_till_now);
 		}

 	return maxp;

 }   
} s;

int main(){
    io();

    vector<int> prices = {7,6,4,3,1};
    cout << " Solution: " <<  s.maxProfit(prices) << endl;

    return 0;
}

