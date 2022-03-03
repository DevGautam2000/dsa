#include "io/io.h"

class Solution{
public:

 int sumOddLengthSubarraysBrute(vector<int>& arr) {
 	//* TC: O(n3) SC: O(1) | Sliding Window (Brute force)
 	int total = 0;

	for (int window = 1; window <= arr.size(); window += 2)
		for (int i = 0; i + window <= arr.size(); i++)
			for (int j = i; j < i + window; j++)
				total += arr[j];

	return total;
 }  

 int sumOddLengthSubarraysBruteOptimised(vector<int>& arr) {
 	//* TC: O(n2) SC: O(1) | Sliding Window (optimised)
 	int totalSum = 0;

	for (int win = 1; win <= arr.size(); win += 2) {
		// sum up all the elements in the first window, W1
		int winSum = accumulate(arr.begin(),arr.begin()+win,0);
		totalSum += winSum;

		// slide W1 one element at a time.
		// remove (subtract) the first element from the W1
		// and insert (add) the last element of the slided W1 into the previous sum.
		for (int i = 1; i + win <= arr.size(); i++) {
			winSum = winSum - arr[i - 1] + arr[i + win - 1];
			totalSum += winSum;
		}
	}

	return totalSum;
 } 

 int sumOddLengthSubarraysLinear(vector<int>& arr) {
 	//* TC: O(1) SC: O(1) 
 	int n = arr.size(), sum = 0;

	int evenStops = !(n & 1)? n /2 : n/ 2 + 1;
	int evenStarts = 1;

	int oddStarts = 0;
	int oddStops = n / 2;

	for (int i = 0; i < n; ++i) {
		sum += ((oddStops * oddStarts) + (evenStops * evenStarts)) * arr[i];
		if (!(i & 1)) 
			oddStarts++,evenStops--;
		else 
			evenStarts++,oddStops--;
	}

	return sum;
 }   
} s;

int main(){
    io();
    vector<int> arr = {1,4,2,5,3};
    cout << "Brute Solution: ";
    cout<<s.sumOddLengthSubarraysBrute(arr);el;

    cout << "Brute optimised Solution: ";
    cout<<s.sumOddLengthSubarraysBruteOptimised(arr);el;

    cout << "Linear Solution: ";
    cout<<s.sumOddLengthSubarraysLinear(arr);el;

    return 0;
}



