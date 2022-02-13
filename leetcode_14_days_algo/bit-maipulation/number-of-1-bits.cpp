#include "io/io.h"

class Solution{
public:

 int hammingWeight(uint32_t n) {
        
        int count=0;
        while(n!=0){
            n &= n-1;
            count++;
        }
        
        return count;
    }  
} s;

int main(){
    io();
    cout << " Solution- number of bits set are:  " << s.hammingWeight(3) << endl;

    return 0;
}

