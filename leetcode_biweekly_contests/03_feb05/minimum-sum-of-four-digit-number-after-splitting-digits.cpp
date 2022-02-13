#include "io/io.h"

class Solution{
public:
	int minimumSum(int num) {
        
        vector<int> nums;
        
        while(num!=0){
            
            int r = num%10;
            
            nums.push_back(r);
            num /= 10;
        }
        
        sort(nums.begin(),nums.end());
        
        int a = 0, b = 0;
        for (int i = 0; i < nums.size(); i++){
            if (i & 1)
                a = a*10 + nums[i];
            else
                b = b*10 + nums[i];
        }
        
        return a+b;
    }
} s;

int main(){
    io();
    int num = 2932;
    cout << " Solution: " <<  s.minimumSum(num)  << endl;

    return 0;
}

