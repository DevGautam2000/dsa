#include "io/io.h"

class Solution{
public:

 int strStr(string haystack, string needle) {
        //* TC: O(nm), SC: O(1)
 	
        if(needle.empty()) return 0;
        int n = haystack.size();
        int m = needle.size();
        for(int i=0; i<n-m+1; i++)
            for(int j=0; j<m; j++)
                if(haystack[i+j] != needle[j])
                    break;
                else if(j==m-1)
                    return i;
        
        return -1;
    }  
} s;

int main(){
    io();
    string haystack = "hello", needle = "ll";
    cout << " Solution: " << s.strStr(haystack,needle)  << endl;

    return 0;
}

