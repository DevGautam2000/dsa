#include "io/io.h"

class Solution{
public:

 int hammingWeight(uint32_t n) {
        
        int oneBits=0;
        while(n)
            n &= n-1,oneBits++;
        
        return oneBits;
    }  
} s;

int main(){
    io();
    uint32_t n=00000000000000000000000000001011;
    cout << " Solution: " <<  s.hammingWeight(n) << endl;

    return 0;
}

