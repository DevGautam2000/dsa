#include "io/io.h"

class Solution {

public:
    int evalRPN(vector<string>& tokens) {

    	int aggregate=0;
    	int first=0;
    	int second=0;
        for(auto i=0;i<tokens.size(); i++){
        	auto s = tokens[i];
            if( s == "+"){
            	first=stoi(tokens[i-2]);
            	second=stoi(tokens[i-1]);
            	aggregate += first + second;
            }else if(s == "-"){
            	first
            }
        }   

          return aggregate;
    } 
} s;

int main(){
    io();
    vector<string> tokens = {"2","1","+","3","*"};
    cout << " Solution: " << s.evalRPN(tokens)  << endl;

    return 0;
}

