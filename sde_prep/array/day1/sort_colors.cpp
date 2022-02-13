//
// Created by Gautam Saha on 20/01/22.
//

#include "io/io.h"

class Solution {
public:
  void sortColors(vector<int> &nums) {
    // * TC: O(n), SC: O()

    int count0, count1, count2;
    count1 = count2 = count0 = 0;

    for (auto i : nums) {
      if (i == 0)
        count0++;
      if (i == 1)
        count1++;
      if (i == 2)
        count2++;
    }
    int i;
    for (i = 0; i < count0; i++) {
      nums[i] = 0;
    }
    for (int j = 0; j < count1; j++) {
      nums[i++] = 1;
    }
    for (int j = 0; j < count2; j++) {
      nums[i++] = 2;
    }
  }
} s;

int main() {
  io();
  cout << " Solution: " << endl;
  vector<int> nums = {2, 0, 2, 1, 1, 0};
  s.sortColors(nums);
  out(nums);
  return 0;
}
