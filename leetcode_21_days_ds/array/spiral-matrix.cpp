#include "io/io.h"

class Solution {
public:
  vector<int> spiralOrder(vector<vector<int>> &matrix) {
    // * TC:O() SC:O()
    int m = matrix.size(), n = matrix[0].size(), u = 0, d = m - 1, l = 0,
        r = n - 1;

    vector<int> order;

    while (u <= d && l <= r) {

      //? left --- right
      for (int col = l; col <= r; col++)
        order.push_back(matrix[u][col]);

      if (++u > d)
        break;

      //? up ---- down
      for (int row = u; row <= d; row++)
        order.push_back(matrix[row][r]);

      if (--r < l)
        break;

      //? right ---- left
      for (int col = r; col >= l; col--)
        order.push_back(matrix[d][col]);

      if (--d < u)
        break;

      //? down ---- up
      for (int row = d; row >= u; row--)
        order.push_back(matrix[row][l]);

      if (l++ > r)
        break;
    }
    return order;
  }
} s;

int main() {
  io();
  vector<vector<int>> matrix = {{1, 2, 3}, 
                                {4, 5, 6}, 
                                {7, 8, 9}};
  cout << " Solution: " << endl;
  vector<int> res = s.spiralOrder(matrix);
  display(res);
  return 0;
}
