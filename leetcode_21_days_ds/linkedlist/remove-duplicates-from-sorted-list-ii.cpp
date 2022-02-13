#include "io/io.h"

class Solution{
public:

  ListNode* deleteDuplicates(ListNode* head) {
        
	ListNode* dummy = new ListNode(0);
	dummy->next = head; 
	ListNode* cur = dummy;
	int duplicate;

	while (cur->next && cur->next->next) {
			if (cur->next->val == cur->next->next->val) {
				duplicate = cur->next->val;
				while (cur->next && cur->next->val == duplicate) 
					cur->next = cur->next->next;
			}
			else cur = cur->next;
	}

	return dummy->next;
  } 
} s;

int main(){
    io();
    cout << " Solution: " << endl;

    vector<int> l= {1,2,3,3,4,4,5};
    auto head = createList(l);
    auto res = s.deleteDuplicates(head);

    display(res);

    return 0;
}

