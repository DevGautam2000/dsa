#include "io/io.h"

class Solution{
public:

 int minSteps(string s, string t) {

        if(s.size() != t.size()) return 0;

        unordered_map<char,int>m;
        int sum=0;
        for(auto i:s)
            m[i]++;
        for(auto i:t)
            m[i]--;

        for(auto i:m)
            if(i.second!=0)
                sum += abs(i.second);
        
        return sum; 
    }
} sol;

int main(){
    io();
    string s = "leetcode", t = "practice";
    cout << " Solution: " <<  sol.minSteps(s,t) << endl;

    return 0;
}

