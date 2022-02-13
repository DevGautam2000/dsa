#include "io/io.h"

class Solution{
public:

 int mostWordsFound(vector<string>& sentences) {
        
        
        int maxWords=0;
        
        for(auto s: sentences){
            int curr = 0;
            int count=0;
            while(s[curr] != '\0'){
                if(s[curr] == ' ') count++;
                
                curr++;
            }
            
            maxWords= max(maxWords,count+1);
        }
        
        return maxWords;
    }  


    int mostWordsFound2(vector<string>& sentences) {
        
        
        int maxWords=0;
        for(auto s: sentences){
            int freq = count(s.begin(),s.end(),' ');
            
            maxWords= max(maxWords,freq+1);
        }
        
        
        return maxWords;
    }
} s;

int main(){
    io();
	vector<string> sentences = {"alice and bob love leetcode",
	 "i think so too", "this is great thanks very much"};

    cout << "Solution 1: " << s.mostWordsFound(sentences)  << endl;
    cout << "Solution 2: " << s.mostWordsFound2(sentences)  << endl;

    return 0;
}

