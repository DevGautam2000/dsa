#include "io/io.h"

class Solution {
public:

  void moveZeroes(vector<int> &nums) {
    int indexp = 0;
    for (int i = 0; i < nums.size(); i++) {

      if (nums[i] && !nums[indexp])
        nums[indexp++] = nums[i], nums[i] = 0;

      if (nums[indexp])
        indexp++;
    }
  }
} s;

int main() {
  io();
  cout << " Solution: " << endl;

  vector<int> nums = {0, 1, 0, 3, 12};
  s.moveZeroes(nums);
  display(nums);
  return 0;
}
