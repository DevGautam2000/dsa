//
// Created by Gautam Saha on 24/01/22.
//
#include "io/io.h"

class Solution {
public:
  string minRemoveToMakeValid(string s) {
    // * TC: O(n), SC: O(n)

    stack<int> stk;

    for (int i = 0; i < s.size(); i++) {
      if (s[i] == '(')
        stk.push(i);
      else if (s[i] == ')') {
        if (stk.empty())
          s[i] = '$';
        else
          stk.pop();
      }
    }
    while (!stk.empty()) {
      s[stk.top()] = '$';
      stk.pop();
    }

    s.erase(remove(s.begin(), s.end(), '$'), s.end());
    return s;
  }
} sol;

int main() {
  io();
  string s = "))((";
  cout << " Solution: \n" << sol.minRemoveToMakeValid(s) << endl;

  return 0;
}
