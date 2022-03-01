#include "io/io.h"

class Solution {
public:
  vector<int> decode(vector<int> &encoded, int first) {

    //* TC: O(n), SC: O(n)̉
    int n = encoded.size();
    vector<int> decoded(n + 1);
    decoded[0] = first;

    for (int i = 1; i < n + 1; i++)
      decoded[i] = decoded[i - 1] ^ encoded[i - 1];

    return decoded;
  }

  vector<int> decodeConstantSpace(vector<int> &encoded, int first) {

    int n = encoded.size();
    encoded.insert(encoded.begin(), first);

    for (int i = 1; i < n + 1; i++)
      encoded[i] ^= encoded[i - 1];

    return encoded;
  }
} s;

int main() {
  io();
  vector<int> encoded = {1, 2, 3};
  int first = 1;
  cout << " Solution: " << endl;
  auto res = s.decode(encoded, first);
  console::display(res);

  cout << "\nConstant Space Solution: " << endl;
  res = s.decodeConstantSpace(encoded, first);
  console::display(res);

  return 0;
}
