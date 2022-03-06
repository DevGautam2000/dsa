#include "io/io.h"

class Solution {
public:
    string interpret(string command) {
        
        string res="";
        
        int i;
        for(i=0; i<command.size(); i++){
            
            auto c= command[i];
            
            if(c=='G') res+=c;
            else if(c=='('){
                if(command[i+1]==')') res+='o';
                else if(command[i+1]=='a') res+="al";
            }
                     
        }
        
        return res;
    }
}s;

int main(){
    io();
    string command = "G()(al)";
    cout << " Solution: " << s.interpret(command)  << endl;

    return 0;
}

