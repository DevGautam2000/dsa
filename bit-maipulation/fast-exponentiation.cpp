#include "io/io.h"

class Solution{
public:

 long long fastExponentiation(int base,int pow){ 
    //* TC: O(logn), SC: O(1)

    long long ans=1;

    while(pow){

    	int lastbit=(pow&1);
    	if (lastbit){
    		ans *= base;
    	}

    	pow = pow>>1;
    	base *= base;
    	
    } 

    return ans;
 }   
} s;

int main(){
    io();
    cout << " Solution: " <<  s.fastExponentiation(2,12) << endl;

    return 0;
}


