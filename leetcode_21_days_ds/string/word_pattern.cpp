#include "io/io.h"

class Solution {
public:
  bool wordPattern(string pattern, string s) {

    // * TC: O(n), SC: O(n)

    unordered_map<char, string> mp;
    vector<string> dups;
    vector<string> res;

    istringstream iss(s);
    for (string st; iss >> st;)
      res.push_back(st);

    unordered_set set(res.begin(), res.end());

    if (res.size() < pattern.size())
      return false;

    for (int i = 0; i < pattern.size(); i++)
      mp.insert({pattern[i], res[i]});

    if (set.size() < mp.size())
      return false;

    for (char &i : pattern)
      dups.push_back(mp[i]);

    if (dups != res)
      return false;

    return true;
  }
} sol;

int main() {
  io();
  string pattern = "aba", s = "dog cat dog";
  //  string pattern = "jquery", s = "jquery";
  cout << " Solution: " << boolify(sol.wordPattern(pattern, s)) << endl;

  return 0;
}
