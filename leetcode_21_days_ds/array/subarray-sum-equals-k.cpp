//
// Created by Gautam Saha on 22/01/22.
//
#include "io/io.h"

class Solution {
public:
  int subarraySum(vector<int> &nums, int k) {
    // * TC:O(n2) SC:O(n)

    //! Time Limit Exceed(TLE) 84/89 test cases passed
    int len = nums.size(), count = 0;
    vector<int> ls; // prefix sum array or left sum array
                    // ls[i] will be sum of elemensts from nums[0] to nums[i]
    ls.push_back(0);
    for (int i = 0; i < len; i++)
      ls.push_back(ls.back() + nums[i]); // inserting elements in ls
    for (int i = 0; i < ls.size(); i++) {
      for (int j = i + 1; j < ls.size(); j++) {
        if (ls[j] - ls[i] == k)
          count++;
      }
    }
    return count;
  }

  int subarraySumOptimal(vector<int> &nums, int k) {
    // * TC:O(n) SC:O(n)

    int ls = 0;
    int len = nums.size(), count = 0;
    map<int, int> m;
    m[0] = 1;
    for (int i = 0; i < len; i++) {
      ls += nums[i];

      if (m.find(ls - k) != m.end())
        count++;
      m[ls]++;
    }
    return count;
  }
} s;

int main() {
  io();
  vector<int> nums = {2, 8, 5, -3, 1, 8};
  int k = 10;
  cout << " Solution: " << s.subarraySum(nums, k) << endl;
  cout << " Solution: " << s.subarraySumOptimal(nums, k) << endl;

  return 0;
}
