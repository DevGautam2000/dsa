#include "io/io.h"

class Solution{
public:

	vector<long long> sumOfThree(long long num) {
        
         // x + x+1 + x+2 = num;
        
        if(num%3==0)
            return {num/3-1, num/3 , num/3+1};

        return {};
        
    }
} s;

int main(){
    io();
    cout << " Solution: " ;
    auto res = s.sumOfThree(33);
    console::display(res);

    return 0;
}

