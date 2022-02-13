#include "io/io.h"

class Solution{
public:
string reverseWords(string s) {
        
    string ans="";
	istringstream iss(s);
	for (string str; iss >> str; )
         reverse(str.begin(),str.end()), ans += str +" ";
    ans.pop_back(); //remove the extra space
        
    return ans;
    } 
} s;

int main(){
    io();
    string st= "Let's take LeetCode contest";
    cout << " Solution: " <<  s.reverseWords(st) << endl;

    return 0;
}

