#include "io/io.h"

class Solution{
public:

  bool isPowerOfTwo(int n) {
        return n && (!(n&(n-1)));
    }   
} s;

int main(){
    io();
    cout << " Solution: " <<  debug::boolify(s.isPowerOfTwo(32)) << endl;

    return 0;
}

