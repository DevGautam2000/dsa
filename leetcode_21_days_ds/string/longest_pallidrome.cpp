#include "io/io.h"

class Solution {
public:
    int longestPalindrome(string s) {
        int freq[128] = {0};
        
        for(char c : s) 
            freq[c]++;
        
        int count=0;
        for(int i = 0; i < 128; i++) 
            if(freq[i]%2) count++;

        if(count>0) count--;
        
        return s.size()-count;
    }
}s;

int main(){
    io(current_path());

    cout << " Solution: " << s.longestPalindrome("ddddefggh")  << endl;

    return 0;
}

