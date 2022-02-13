#include "io/io.h"

class Solution{
public:

 ListNode* reverse(ListNode* head, ListNode* tail) {
        ListNode* current = head;
        ListNode *prev = NULL, *next = NULL;
 
        while (current != tail) {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        
        return prev;
    }
    
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* ptr = head;
        
        for (int i = 0; i < k; i++) {
            if (!ptr) return head;
            ptr = ptr->next;
            
        }
        ListNode* tmp = reverse(head, ptr);
        head->next = reverseKGroup(ptr, k);
        return tmp;
    } 
} s;

int main(){
    io();
    cout << " Solution: "   << endl;

    vector<int> nodes  ={1,2,3,4,5};
    auto head = createList(nodes);
    int k=3;
    
    auto res = s.reverseKGroup(head,k);
    display(res);
    return 0;
}

