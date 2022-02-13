//
// Created by Gautam Saha on 19/01/22.
//

#include "io/io.h"

class Solution {
public:
  ListNode *detectCycle(ListNode *head) {

    // edge case - empty list
    if (!head || !head->next || !head->next->next)
      return nullptr;
    // support animals
    ListNode *turtle = head, *hare = head;
    // checking if we loop or not
    while (hare->next && hare->next->next) {
      hare = hare->next->next;
      turtle = turtle->next;
      if (hare == turtle)
        break;
    }
    // exiting if we do not find a loop
    if (hare != turtle)
      return nullptr;
    // finding the start of the loop
    turtle = head;
    while (turtle != hare) {
      hare = hare->next;
      turtle = turtle->next;
    }

#ifndef ONLINE_JUDGE
    turtle->next = nullptr;
#endif
    return turtle;
  }

  ListNode *detectCycle2(ListNode *head) {
    unordered_set<ListNode *> s;
    while (head) {

      if (s.find(head) != end(s)) {

#ifndef ONLINE_JUDGE
        head->next = nullptr;
#endif
        return head;
      }

      s.insert(head);
      head = head->next;
    }

    return nullptr;
  }
} s;

int main() {
  io();
  cout << " Solution: " << endl;
  vector<int> nodes = {1, 2}; // enter nodes to create linkedlist
  int pos = 0;
  auto head = createListWithCycle(nodes, pos);
  auto head2 = createListWithCycle(nodes, pos);
  out(s.detectCycle(head));
  out(s.detectCycle2(head2));
  return 0;
}
