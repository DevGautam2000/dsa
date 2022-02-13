#include "io/io.h"

class Solution{
public:
void reorderList(ListNode* head) {
		if ( ! head ) return;
		ListNode *slow = head, *fast = head;
		while ( fast->next && fast->next->next ){
			slow = slow->next;
			fast = fast->next->next;
		}
			
		
		ListNode *prev = NULL, *cur = slow->next, *save;
		while ( cur ){
			save = cur->next;
			cur->next = prev;
			prev = cur;
			cur = save;
		}
			
		slow->next = NULL;
		
		ListNode *head2 = prev;
		while ( head2 ){
			save = head->next;
			head->next = head2;
			head = head2;
			head2 = save;
		}      
	} 
} s;

int main(){
    io();
    cout << " Solution: "   << endl;

    vector<int> nodes={1,2,3,4};
    auto head = createList(nodes);
    s.reorderList(head);
    display(head);

    return 0;
}

