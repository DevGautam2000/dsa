#include "io/io.h"

class Solution{
public:

  string frequencySort(string s) {
        
        unordered_map<char , int> mp;
        
        for(auto c: s)
            mp[c]++;
        
        priority_queue<pair<int,char>> pq;
        
        for(auto it:mp)
            pq.push({it.second,it.first});
        
        string ans="";
        while(!pq.empty()){
            auto p = pq.top();
            pq.pop();
            for(int i=0 ; i<p.first ;i++)
                ans += p.second;
        }
        
        
        return ans;
        
    }

} sol;

int main(){
    io();
    string s= "cccaaa";
    cout << " Solution: " << sol.frequencySort(s) << endl;

    return 0;
}

