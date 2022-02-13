#include "io/io.h"

class Solution{
public:
 vector<int> twoSum(vector<int>& numbers, int target) {
        int first = 0;
        int second = numbers.size()-1;
        
        while(numbers[first] + numbers[second] != target)
            if(numbers[first] + numbers[second] > target)
                second--;
            else
                first++;
        
        return vector<int>({first+1 , second+1});
    } 
} s;

int main(){
    io();
    cout << " Solution: "  << endl;
    vector<int>  nums={2,7,11,15};
    int target = 9;
    auto res = s.twoSum(nums,target);
    console::display(res);

    return 0;
}

