#include "io/io.h"

class Solution{
public:

 string mergeAlternately(string word1, string word2) {
        //* TC: O(n), SC: O(1)
        string ans="";
        int w1=0,w2=0;
        for(int i=0; i<word1.size()+word2.size(); i++){
            if(i&1 and word2[w2]) ans += word2[w2++];
            else if(!(i&1) and word1[w1]) ans += word1[w1++];
        }
        
        while(w1<word1.size()) ans+=word1[w1++];
        while(w2<word2.size()) ans+=word2[w2++];

        return ans;
    } 

 string mergeAlternatelyOnePass(string word1, string word2) {
 	//* TC: O(n), SC: O(1)
    int i = 0, j = 0;
    string res;
    while (i < word1.size() && j < word2.size())
        res += string() + word1[i++] + word2[j++];

    return res + word1.substr(i) + word2.substr(j);
} 

 string mergeAlternatelyOnePointer(string word1, string word2) {
 	 //* TC: O(n), SC: O(1)
    string res;
    for (auto i = 0; i < max(word1.size(), word2.size()); ++i) {
        if (i < word1.size())
            res += word1[i];
        if (i < word2.size())
            res += word2[i];
    }
    return res;
}
} s;

int main(){
    io();
    string word1 = "ab", word2 = "pqrs";
    cout << " 2 pointer Solution: " <<
     s.mergeAlternately(word1,word2)  << endl;
    cout << " 1 pointer Solution: " << 
    s.mergeAlternatelyOnePointer(word1,word2)  << endl;
    cout << " 1 pass Solution: " << 
    s.mergeAlternatelyOnePass(word1,word2)  << endl;

    return 0;
}

