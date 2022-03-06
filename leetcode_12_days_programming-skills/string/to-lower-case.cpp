#include "io/io.h"

class Solution{
public:

 string toLowerCase(string s) {
        for(auto &c : s)
            if(isalpha(c) and c-'A' < 26)
                c ^= 32;
        
    return s;
    } 
} sol;

int main(){
    io();
    string s= "Hello";
    cout << " Solution: " <<  sol.toLowerCase(s) << endl;

    
    return 0;
}

