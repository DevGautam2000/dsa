#include "io/io.h"

class Solution{
public:

 char findTheDifference(string s, string t) {
        char ans=0;
        
        for(auto c: s)ans ^= c;
        for(auto c: t) ans ^= c;
        
        return ans;
    }  
} sol;

int main(){
    io();
    string s = "abcd", t = "abcde";
    cout << " Solution: " <<  sol.findTheDifference(s,t) << endl;

    string a ="A";
    a+= 'a';
    cout<<a;el;

    return 0;
}

