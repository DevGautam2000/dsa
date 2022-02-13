#include "io/io.h"

class Solution {
public:

  int eraseOverlapIntervals(vector<vector<int>> &intervals) {
    //* TC: O(nlogn), SC: O(1)
    int n = intervals.size();
    sort(intervals.begin(), intervals.end());

    int count = -1, prev = intervals[0][1];
    for (auto i : intervals)
      if ( i[0] >= prev )
          prev = i[1];
      else{
        count++;
        prev = min(prev,i[1]);
      }

    return count;
  }
} s;

int main() {
  io();
  //  vector<vector<int>> intervals = {{1, 2}, {2, 3}, {3, 4}, {1, 3}};
  vector<vector<int>> intervals = {{1, 100}, {11, 22}, {1, 11}, {2, 12}};
  cout << " Solution: " << s.eraseOverlapIntervals(intervals) << endl;

  return 0;
}
