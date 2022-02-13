#include "io/io.h"

class Solution{
public:

  void rotate(vector<int>& nums, int k) {
        k %=nums.size(); // k => 3
        reverse(nums.begin(), nums.end()); //nums => {7 6 5 4 3 2 1 }
        reverse(nums.begin(), nums.begin()+k); //nums => {5 6 7 4 3 2 1 }
        reverse(nums.begin()+k, nums.end()); //nums => {5 6 7 1 2 3 4 }
    }  
} s;


int main(){
    io();
    cout << " Solution: " << endl;
    vector<int> nums = {1,2,3,4,5,6,7};
    int k=3;

    s.rotate(nums,k);
    console::display(nums);

    return 0;
}

