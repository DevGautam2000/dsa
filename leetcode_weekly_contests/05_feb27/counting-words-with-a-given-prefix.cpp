#include "io/io.h"

class Solution{
public:

 int prefixCount(vector<string>& words, string pref) {
        
        int count=0;
        for(auto s : words)
            if(mismatch(pref.begin(),pref.end(),s.begin(),s.end()).first == pref.end())
                count++;
        
        return count;
    } 
} s;

int main(){
    io();
    vector<string> words = {"pay","attention","practice","attend"};
    string pref = "at";
    cout << " Solution: " << s.prefixCount(words,pref)  << endl;

    return 0;
}

