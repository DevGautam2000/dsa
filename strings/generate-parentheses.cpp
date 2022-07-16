#include "io/io.h"



class Solution {
public:
    vector<string> generateParenthesis(int n) {
        
        /*
        open == close == n
        open < n 
        closed < n
        */

        vector<string> res; 
        
        function<void (string,int,int)> 
            backtrack = [&](string s,int open, int closed){
            
            if(open == n and closed == n){
                res.push_back(s);
                return;
            }
            if(open < n)
                backtrack(s+"(",open+1,closed);
            if(closed < open)
                backtrack(s+")",open,closed+1);
            
        };
        
        backtrack("",0,0);
        return res;
    }  
} s;

int main(){
    io();
    cout << " Solution: "  << endl;
    auto res = s.generateParenthesis(3);
    console::display(res);

    return 0;
}

