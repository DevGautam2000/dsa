#include "io/io.h"

class Solution{
public:

  int finalValueAfterOperations(vector<string>& operations) {
        
        //* TC: O(n), SC: O(1)
        int freq=0;
        // for(auto s: operations){
        //     if(s == "--X") --freq;
        //     else if(s == "X--") freq--;
        //     else if(s == "++X") ++freq;
        //     else freq++;
        // }
        
        
        for(auto s: operations)
            s[1] == '+'? freq++:freq--;
        
        return freq;
    }  
} s;

int main(){
    io();
    vector<string> operations = {"--X","X++","X++"};
    cout << " Solution: " << s.finalValueAfterOperations(operations)  << endl;

    return 0;
}
