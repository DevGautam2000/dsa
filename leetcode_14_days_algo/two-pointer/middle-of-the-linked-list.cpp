#include "io/io.h"

class Solution{
public:


	ListNode* middleNode(ListNode* head) {
            
        auto p = head;
        int s=0;
        
        while(p)
            s++ , p=p->next;
        
        for(int i=0 ;i<s/2; i++)
            head=head->next;
            
        return head;
    }

    ListNode* middleNodeTwoPointer(ListNode* head) {
        auto fast=head;
        
        while(fast && fast->next)
            head=head->next, fast=fast->next->next;
        
        return head;
    }


} s;

int main(){
    io();
    cout << " Solution: " << endl;
    vector<int> nodes = {1,2,3,4,5,6};
    auto head = createList(nodes);
    auto res = s.middleNode(head);
    display(res);
    cerr<<endl;

    head = createList(nodes);
    res = s.middleNodeTwoPointer(head);
    display(res);

    return 0;
}

