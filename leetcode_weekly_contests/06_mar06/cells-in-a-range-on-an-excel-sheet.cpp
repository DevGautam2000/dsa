#include "io/io.h"

class Solution{
public:
vector<string> cellsInRange(string s) {
        
        vector<string> ans;
        
        string first = s.substr(0,2);
        string last = s.substr(s.size()-2,s.size());
            for(char j=first[0]; j<=last[0]; j++){
                 for(int i=first[1]-'0'; i<=last[1]-'0'; i++){
                    string n;
                    n += j + to_string(i);

                    ans.push_back(n);
                }
            }         
        return ans;
    } 
} sol;

int main(){
    io();
    string s = "A1:F1";
    cout << " Solution: " << endl;
    auto res = sol.cellsInRange(s);
    console::display(res);

    return 0;
}

