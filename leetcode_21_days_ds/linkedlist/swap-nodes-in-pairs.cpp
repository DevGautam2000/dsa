#include "io/io.h"

class Solution{
public:

 ListNode* swapPairs(ListNode* head) {
        
        ListNode *curr=head;
        
        while(curr && curr->next){
            
            swap(curr->val,curr->next->val);
            curr=curr->next->next;
        }
        
        return head;
    }   
} s;

int main(){
    io();
    cout << " Solution: "  << endl;
    vector<int> l = {1,2,3,4};
    auto head = createList(l);
    auto res = s.swapPairs(head);
    display(res);

    return 0;
}

