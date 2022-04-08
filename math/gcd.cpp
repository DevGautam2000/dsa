#include "io/io.h"

class Solution{
public:

 int gcd(int a, int b){    

 	//! 15 = 1 x [3] x 5
 	//! 27 = 1 x [3] x 9
 	//* three is greatest common divisor 
 	
 	return a%b ? gcd(b,a%b) : b ;
 }   

} s;

int main(){
    io();
    
    cout << " Solution: " <<  s.gcd(15,27) << endl;
    return 0;
}

