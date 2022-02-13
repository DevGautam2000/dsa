#include "io/io.h"

class Solution{
public:

 long long smallestNumber(long long num) {
    int freq[15] = {0};
    bool is_pos = (num>0);
   
    num = abs(num);
   
    while (num){
        int d = num % 10; 
        freq[d]++; 
        num = num / 10;
    }
     
    long long result = 0;
   
          if(is_pos){
              for (int i = 1 ; i <= 9 ; i++){
                  if (freq[i]){
                      result = i;
                      freq[i]--;
                      break;
                  }
              }

              for (int i = 0 ; i <= 9 ; i++)
                  while (freq[i]--)
                      result = result * 10 + i;
            
          }else{
              for (int i = 9 ; i >= 1 ; i--)
                 if (freq[i]){
                    result = i;
                    freq[i]--;
                    break;
                 }
              

              for (int i = 9 ; i >=0 ; i--)
                 while (freq[i]--)
                    result = result * 10 + i;

              result = -result;
            }
    return result;
 }   
} s;

int main(){
    io();
    long long num=-7605;
    cout << " Solution: " <<  s.smallestNumber(num) << endl;

    return 0;
}

