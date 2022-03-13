#include "io/io.h"

class Solution{
public:

 bool isAlienSorted(vector<string>& words, string order) {
        
 	//* TC: O(n*m), SC: O(n)

        unordered_map<char,int> m;
        
        int ind=0;
        for(auto c: order)
            m[c] = ind++;
        
        for(int i=0; i<words.size()-1;i++){
            
            string w1 = words[i];
            string w2 = words[i+1];
            
            for(int j=0; j<w1.size(); j++){
                if(j == w2.size()) return false;
                
                if(w1[j] != w2[j]){
                    if(m[w1[j]] > m[w2[j]]) 
                        return false;
                    
                    break;
                }
                
            }
        }
        
        return true;
    }  
} s;

int main(){
    io();
    vector<string> words = {"hello","leetcode"};
    string order = "hlabcdefgijkmnopqrstuvwxyz";
    cout << " Solution: " 
    << debugger::boolify(s.isAlienSorted(words, order)) << endl;

    return 0;
}

