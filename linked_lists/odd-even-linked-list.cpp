#include "io/io.h"

class Solution{
public:
ListNode* oddEvenList(ListNode* head) {
        
        if(!head) 
            return head;

        ListNode *odd,*even,*e1;

        if(head)
        	odd=head,even=e1=head->next;
        
        while(odd && even){
            odd->next = even->next;
            if(odd->next){
                odd=odd->next;
                even->next= odd->next;
            }
            even=even->next;
        }
        
        odd->next = e1;
        
        return head;
    }
} s;

int main(){
    io();
    cout << " Solution: " << endl;
    vector<int> nodes = {1,2,3,4,5};
    auto head = createList(nodes);

    auto res = s.oddEvenList(head);
    display(res);

    return 0;
}

