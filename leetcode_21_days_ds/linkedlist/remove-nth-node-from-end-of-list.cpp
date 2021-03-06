#include "io/io.h"

class Solution{
public:
ListNode* removeNthFromEnd(ListNode* head, int n) {
       ListNode *fast = head, *slow = head;
        for (int i = 0; i < n; i++) 
            fast = fast->next;
        
        if (!fast)
            return head->next;
        
        while (fast->next) 
            fast = fast->next, slow = slow->next;
        
        slow->next = slow->next->next;
        
        return head;
    }
} s;

int main(){
    io();
    cout << " Solution: "  << endl;
    vector<int> nodes = {1,2,3,4,5};
    int n = 2;
    auto head = createList(nodes);
    auto res = s.removeNthFromEnd(head,n);

    display(res);
    return 0;
}

