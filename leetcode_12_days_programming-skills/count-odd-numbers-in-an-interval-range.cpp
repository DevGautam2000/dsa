#include "io/io.h"

class Solution{
public:

  	/*
    Approach: Total numbers in the range will be (high – low)+1 i.e. N. 
    
    -If low or high is odd, then the count of odd number will be N/2 + 1 
     and even numbers = N – countofOdd.
    -Else, count of odd numbers will be N/2 and even 
     numbers = N – countofOdd.
        
    */
    int countOdds(int low, int high) {
        int n = (high-low)+1;
        return n&1? low&1 or high&1 ? n/2+1 : n/2: n/2;
    }
    int countOdds2(int low, int high) {
        int n = (high-low)/2;
        return low&1 or high&1 ? n+1 : n;
    }
} s;

int main(){
    io();
    cout << " Solution1: "<< s.countOdds(11,17) << endl;
    cout << " Solution2: "<< s.countOdds2(11,17) << endl;
    return 0;
}

