#include "io/io.h"

class Solution {

	vector<string> res; //neglecting the space as this is to be returned
    void backtrack(string &s, int i) {
        if (i == s.size()) {
        	res.push_back(s);
        	return;
        }

        backtrack(s, i + 1);

        if (isalpha(s[i])) 
        	s[i] ^= (1 << 5),backtrack(s, i + 1);
    }
public:
    vector<string> letterCasePermutation(string S) {
        
        //* TC: O(n), SC: O(1)
		//? where n : [sizeof] s
        backtrack(S, 0);
        return res;
    }
}s;

int main(){
    io();
    cout << " Solution: " << endl;
    string str = "3z4";
    auto res = s.letterCasePermutation(str);
    console::display(res);

    return 0;
}

