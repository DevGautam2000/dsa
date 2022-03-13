#include "io/io.h"

class Solution{
public:

 bool isHappy(int n) {
       if(n == 1 || n == 7) return true;
        else if(n < 10) return false;
        int m = 0;
        while(n != 0){
            int tail = n % 10;
            m += tail * tail;
            n = n/10;
        }
        return isHappy(m); 
    }   
} s;

int main(){
    io();
    int n = 19;
    cout << " Solution: " 
    << debugger::boolify(s.isHappy(n)) << endl;

    return 0;
}

