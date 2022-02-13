#include "io/io.h"

class Solution{
public:

 vector<bool> sieveOfEratoSthenes(int n){
     //* TC: O(), SC: O() 

 	vector<bool> isPrime(n+1,true);
 	isPrime[0] = isPrime[1] = false;

 	for(int i=2; i<=sqrt(n); i++)
 		for(int j=2*i; j<=n; j+=i){
 			isPrime[j] = false;
 		}
 	

 	return isPrime;
 }   
} s;

int main(){
    io();
    cout << " Solution: "  << endl;

    auto res = s.sieveOfEratoSthenes(20);
    display(res);

    return 0;
}

