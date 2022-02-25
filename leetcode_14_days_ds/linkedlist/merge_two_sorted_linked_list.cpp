#include "io/io.h"

class Solution
{
public:
     ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
         //*TC: O(n+m), SC: O(1)
        
        ListNode *head=nullptr,*tail = nullptr;

        if(!list1 or !list2 ) return !list1 ? list2 : list1;

        list1->val < list2->val ? 
            (head = list1, list1 = list1->next) : 
            (head = list2, list2 = list2->next) ;
        
        tail = head;

        while (list1 && list2){
            
            if (list1->val < list2->val)
                tail->next = list1,list1 = list1->next;
            else
                tail->next = list2,list2 = list2->next;
            
            tail = tail->next;
        }
        !list1 ? (tail->next = list2) : (tail->next = list1);

        return head;
    }

} s;

int main()
{

    io();
    vector<int> l1 = {1,2,4};
    auto list1 = createList(l1);
   
    vector<int> l2 = {1,3,4,4,7};
    auto list2 = createList(l2);

    cout << " Solution: " << endl;
    auto merged = s.mergeTwoLists(list1, list2);
    console::display(merged);

    //TODO: recursive solution
    
    return 0;
}
