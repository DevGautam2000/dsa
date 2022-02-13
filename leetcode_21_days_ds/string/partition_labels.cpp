#include "io/io.h"

class Solution{
public:

  vector<int> partitionLabels(string s) {    
 	//* TC: 2O(n), SC: O(1) 
    //! [as map only contains 26 alphabets does not exceeds this]
    //! and the vector to be returned is not counted

        unordered_map<char,int> last;

        for(int i=0; i<s.size(); i++)
        	last[s[i]] = i;

        int start=0,end = 0;
        vector<int> output;

        
        for(int i=0; i<s.size(); i++){

            end = max(end,last[s[i]]);
            if (i == end){
                output.push_back(end-start+1);
                start = i + 1;
            }

        }
        return output;
 }   
} sol;

int main(){
    io();
    string s = "ababcbacadefegdehijhklij";
    cout << " Solution: "  << endl;
    auto res  = sol.partitionLabels(s);
    display(res);

    
    return 0;
}
