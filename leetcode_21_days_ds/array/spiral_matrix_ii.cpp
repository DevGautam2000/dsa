//
// Created by Gautam Saha on 18/01/22.
//

#include "io/io.h"

class Solution {
public:
  vector<vector<int>> generateMatrix(int n) {
    // * TC: O(), SC: O()
    vector<vector<int>> spiral(n, vector<int>(n));

    int u = 0, d = n - 1, l = 0, r = n - 1;

    int i = 1;
    while (u <= d && l <= r) {

      //? left --- right
      for (int col = l; col <= r; col++)
        spiral[u][col] = i++;

      if (++u > d)
        break;

      //? up ---- down
      for (int row = u; row <= d; row++)
        spiral[row][r] = i++;

      if (--r < l)
        break;

      //? right ---- left
      for (int col = r; col >= l; col--)
        spiral[d][col] = i++;

      if (--d < u)
        break;

      //? down ---- up
      for (int row = d; row >= u; row--)
        spiral[row][l] = i++;

      if (l++ > r)
        break;
    }

    return spiral;
  }
} s;

int main() {
  io();
  cout << " Solution: " << endl;

  int n = 3;
  auto res = s.generateMatrix(n);
  display(res);

  return 0;
}
