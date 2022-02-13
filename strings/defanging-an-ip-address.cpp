#include "io/io.h"

class Solution{
public:

  string defangIPaddr(string address) {
        
        string defanged="";
        for(int i=0 ;i<address.size(); i++){
            if(address[i]=='.')
            defanged += "[.]";
            else
            defanged += address[i];
            
        }
        
        return defanged;
    }  
} s;

int main(){
    io();
    string address = "1.1.1.1";
    cout << " Solution: " << "\""<<s.defangIPaddr(address) <<"\"" << endl;

    return 0;
}

