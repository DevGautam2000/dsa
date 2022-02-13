#include "io/io.h"

class Solution{
public:
vector<int> pivotArray(vector<int>& nums, int pivot) {
        

        vector<int> small;
        vector<int> big;
        int same=0;
        
        for(auto i: nums){
            if(i<pivot)
                small.push_back(i);
            else if(i>pivot)
                big.push_back(i);
            else same++;
        }
        
        nums.clear();
        for(auto i: small)
            nums.push_back(i);
        
        for(int i=0; i<same; i++)
            nums.push_back(pivot);

        for(auto i: big)
            nums.push_back(i);
        
        
        
        return nums;
    } 
} s;

int main(){
    io();
    cout << " Solution: "  << endl;
    vector<int> nums = {9,12,5,10,14,3,10};
    int pivot = 10;

    auto ans = s.pivotArray(nums,pivot);
    display(ans);

    return 0;
}

