#include "io/io.h"

class Solution{
public:
	uint32_t reverseBits(uint32_t n) {
        
        bitset<32> bs(n);

        string s = bs.to_string();
        reverse(s.begin(),s.end());
        
        
        return bitset<32>(s).to_ulong();
    }  
} s;

int main(){
    io();
    uint32_t n = 43261596;
    cout << " Solution: " << s.reverseBits(n)  << endl;

    return 0;
}

