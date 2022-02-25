#pragma once
#include <bits/stdc++.h>
using namespace std;

struct ListNode {
  int val;
  ListNode *next;
  ListNode *prev;
  ListNode(int x, ListNode *n) : val(x), next(n), prev() {}
  ListNode(int x) : val(x), next(NULL), prev(NULL) {}
};

namespace ln {

static ListNode *createList(vector<int> list) {

  ListNode *head = nullptr, *tail;
  if (!list.empty()) {
    head = new ListNode(list[0]);
    tail = head;
  }
  for (int i = 1; i < list.size(); ++i) {
    tail->next = new ListNode(list[i]);
    tail = tail->next;
  }

  return head;
}

static ListNode *createListWithCycle(vector<int> list, int pos) {

  vector<ListNode *> nodes;
  ListNode *head = nullptr, *tail;
  if (!list.empty()) {
    head = new ListNode(list[0]);
    tail = head;
    nodes.push_back(tail);
  }
  for (int i = 1; i < list.size(); ++i) {
    tail->next = new ListNode(list[i]);
    tail = tail->next;
    nodes.push_back(tail);
  }

  nodes.back()->next = nodes[pos];
  
  return head;
}

bool detectCycle(ListNode *head) {
  // * TC: O(), SC: O()
  ListNode *fast = head, *slow = head;

  while (fast && fast->next) {
    slow = slow->next;
    fast = fast->next->next;

    if (slow == fast)
      return true;
  }

  return false;
}
  
} // namespace ln