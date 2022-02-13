//
// Created by Gautam Saha on 20/01/22.
//

#include "io/io.h"

class Solution {
public:
  vector<vector<int>> generate(int numRows) {
    // * TC: O(n2), SC: O(n2)

    vector<vector<int>> res(numRows, vector<int>(numRows));

    for (int i = 0; i < numRows; ++i) {

      res[i] = vector<int>(i + 1);
      res[i][0] = res[i][i] = 1;

      for (int j = 1; j < i; ++j)
        res[i][j] = res[i - 1][j - 1] + res[i - 1][j];
    }

    return res;
  }
} s;

int main() {
  io();
  cout << " Solution: " << endl;

  int n = 4;
  auto res = s.generate(n);
  display(res);
  return 0;
}
