#include "io/io.h"

class Solution{
public:

 int findTheWinner(int n, int k) {

 	//* TC: O(n), SC: O(1)
        int res = 0;
        for (int i = 1; i <= n; ++i)
            res = (res + k) % i;
        return res + 1;
    }   
} s;

int main(){
    io();
    cout << " Solution: " <<  s.findTheWinner(5,2)  << endl;
    return 0;
}

