#include "io/io.h"

class Solution{
public:

 int getDecimalValue(ListNode* head) {
         
        //reverse the linked list
        
        ListNode* prev=nullptr;
        auto curr=head;
        
        while(head){
            head=head->next;
            curr->next= prev;
            prev=curr;
            curr=head;
        }
         int ans=0,i=0;
        while(prev){
            ans += pow(2,i++)*prev->val;
            prev=prev->next;
        }
       
        
        return ans;
        
    }  
} s;

int main(){
    io();
    vector<int> nodes = {1,0,1};
    ListNode* head = ln::createList(nodes);
    cout << " Solution: " << s.getDecimalValue(head) << endl;

    return 0;
}

