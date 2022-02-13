#include "io/io.h"

class Solution{
public:
int subtractProductAndSum(int n) {
        int p=1,s=0;
        
        while(n!=0){
           
            int d = n%10;
            n /= 10;
            p*=d;
            s+=d;            
        }
        
        return p-s;
    }  
} s;

int main(){
    io();
    cout << " Difference of product and sum: " << s.subtractProductAndSum(24)  << endl;

    cout<<'B' - 'A'<<endl;
    return 0;
}

