#include "io/io.h"

class Solution{
public:

 ListNode* middleNode(ListNode* head) {
        //two pointer approach
        
        auto fast=head;
        
        while(fast && fast->next)
            head=head->next, fast=fast->next->next;
        
        return head;
            
    } 
} s;

int main(){
    io();
    vector<int> nodes = {1,2,3,4,5,6};
    ListNode* head = ln::createList(nodes);
    cout << " Solution: " << endl;
    auto res = s.middleNode(head);
    console::display(res);

    return 0;
}

