#include "io/io.h"

class Solution {
public:
  vector<string> findRepeatedDnaSequences(string s) {
        //* TC: O(n), SC: O(n)
        unordered_map<string, int> counter;
        vector<string> res;
        int brick = 10;
        
        if (s.size() < brick) return res;
        
        for (int i=0; i<s.size()-brick-1; i++)
            counter[s.substr(i, brick)]++;
        
        for (auto a:counter)
            if (a.second > 1)
                res.push_back(a.first);

        return res;
  }
} sol;

int main() {
  io();
  cout << " Solution: " << endl;
  string s = "AAAAACCCCCAAAAACCCCCCAAAAAGGGTTT";
  auto res = sol.findRepeatedDnaSequences(s);
  display(res);
  return 0;
}
