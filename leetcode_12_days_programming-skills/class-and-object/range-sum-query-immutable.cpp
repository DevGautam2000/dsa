#include "io/io.h"

class NumArray {
    vector<int> pref;
public:
    NumArray(vector<int>& nums) : pref(nums.size()+1,0){
        partial_sum(nums.begin(),nums.end(),pref.begin()+1);
    }
    
    int sumRange(int left, int right) {
        int sum = pref[right+1] - pref[left];
        return sum;
    }
};

int main(){
    io();
    cout << " Solution: "<< endl;
    vector<int> nums={-2, 0, 3, -5, 2, -1};
 	NumArray* obj = new NumArray(nums);
 	cout<< obj->sumRange(0,2);el;
 	cout<< obj->sumRange(2,5);el;
 	cout<< obj->sumRange(0,5);el;
 
    return 0;
}

