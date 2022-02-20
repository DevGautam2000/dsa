#include "io/io.h"

class Solution{
public:
ListNode* mergeNodes(ListNode* head) {
        
        head=head->next;
        auto temp=head;
        auto res=head;
        int sum=0;
        while(temp){
            if(temp->val != 0){
                sum += temp->val;
                temp = temp->next;
            }else{
                res->val = sum;
                res->next = temp->next;
                temp = temp->next;
                res = temp;
                sum = 0;
            }
        }
       
        return head;
    }
} s;

int main(){
    io();
    cout << " Solution: " << endl;
    vector<int> nodes = {0,3,1,0,4,5,2,0};
    auto head = createList(nodes);

    auto res = s.mergeNodes(head);
    console::display(res);

    return 0;
}

