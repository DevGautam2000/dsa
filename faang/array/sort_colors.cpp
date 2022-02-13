#include "io/io.h"

class Solution {
public:
  vector<int> sortColors(vector<int> &nums) {
    // * TC: O(n), SC: O(1)

    int count0, count1, count2;
    count1 = count2 = count0 = 0;

    for (auto i : nums)
      if (i == 0)
        count0++;
      else if (i == 1)
        count1++;
      else
        count2++;

    int i;
    for (i = 0; i < count0; i++)
      nums[i] = 0;
    for (int j = 0; j < count1; j++)
      nums[i++] = 1;
    for (int j = 0; j < count2; j++)
      nums[i++] = 2;

    return nums;
  }
} s;

int main() {
  io();
  vector<int> nums = {2, 0, 1, 2};
  cout << " Solution: " << endl;
  auto res = s.sortColors(nums);
  for (auto i : res) {
    cout << i << " ";
  }

  return 0;
}
