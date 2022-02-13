#include "io/io.h"

class Solution{
public:

 vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        unordered_map<string, vector<string>> mp;
        vector<vector<string>> ans;
        
        for(auto s : strs){
            auto srt = s;
            sort(srt.begin(),srt.end());    
            mp[srt].push_back(s);            
        }
        
        for(auto it:mp){
            ans.push_back(it.second);
        }
        
        return ans;
    }  
} s;

int main(){
    io();
    cout << " Solution: " << endl;


    vector<string> strs = {"eat","tea","tan","ate","nat","bat"};

    auto res = s.groupAnagrams(strs);
    display(res);


    return 0;
}

