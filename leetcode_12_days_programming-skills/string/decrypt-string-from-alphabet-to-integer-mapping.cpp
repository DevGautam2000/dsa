#include "io/io.h"

class Solution{
public:
string freqAlphabets(string s) {
        
    string res;

	for (int i = 0; i < s.size(); ++i) {

		 if (i < s.size() - 2 && s[i + 2] == '#') {
		      res += stoi(string()+s[i]+s[i+1]) - 10 + 'j';
              i += 2;
		 }else res += 'a' + (s[i] - '1');

	}


  	  return res;
    }  
} sol;

int main(){
    io();
    string s  = "10#11#12#";
    cout << " Solution: " << sol.freqAlphabets(s) << endl;

    return 0;
}

