#include "io/io.h"

class Solution{
public:
int countEven(int num) {
        
        int count=0;

        for(int i=2; i<=num; i++){
            int n=i;
            int s=0;
            while(n){
                int r=n%10;
                n /= 10;
                s+=r; 
            }
            
            if(s%2==0) count++;
        
        }

        return count;
    } 
} s;

int main(){
    io();
    cout << " Solution: " << s.countEven(30)  << endl;

    return 0;
}

