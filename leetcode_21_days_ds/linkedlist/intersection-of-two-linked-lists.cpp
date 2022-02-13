//
// Created by Gautam Saha on 25/01/22.
//

#include "io/io.h"

class Solution {
public:
  ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {

    ListNode *a, *b;
    a = headA;
    b = headB;

    while (a != b) {

      a = a ? a->next : headB;
      b = b ? b->next : headA;
    }

    return a;
  }
} s;

int main() {
  io();
  cout << " Solution: " << endl;
  auto *A = new ListNode(3);
  auto *B = new ListNode(2, A);
  auto res = s.getIntersectionNode(A, B);
  display(res);
  return 0;
}
