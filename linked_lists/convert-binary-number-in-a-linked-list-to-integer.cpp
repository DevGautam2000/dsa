#include "io/io.h"

class Solution{
public:

 int getDecimalValue(ListNode* head) {
         //* TC: O(n), SC: O(1)
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
    cout << " Solution: ";
    vector<int> nums = {1,0,1};
    auto head = createList(nums);
    auto res=s.getDecimalValue(head);
    console::display(res);

    return 0;
}

