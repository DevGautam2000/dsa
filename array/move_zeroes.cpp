#include "io/io.h"

class Solution {
public:
  void moveZeroes(vector<int> &nums) {

    vector<int> ans(nums.size());
    int j = 0;
    for (int i = 0; i < nums.size(); i++) {
      if (nums[i])
        ans[j++] = nums[i];
    }

    nums = ans;
  }

  void moveZeroesTwoPointer(vector<int> &nums) {
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

  nums = {0, 1, 0, 3, 12};
  //  "Two pointer solution"
  s.moveZeroesTwoPointer(nums);
  display(nums);
  return 0;
}
