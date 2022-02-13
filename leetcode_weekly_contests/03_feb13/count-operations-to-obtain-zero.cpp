#include "io/io.h"

class Solution{
public:
int countOperations(int num1, int num2) {
        
        int count=0;
        while(num1 && num2){
            if(num1>=num2)
                num1 -= num2;
            else if(num2>num1)
                num2 -=num1;
                
            count++;
        }
        return count;
    }  
} s;

int main(){
    io();
    int num1=2, num2=3;
    cout << " Solution: " <<  s.countOperations(num1,num2) << endl;

    return 0;
}

