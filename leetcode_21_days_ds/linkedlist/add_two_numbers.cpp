#include "io/io.h"

class Solution
{
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0, first, second;
        ListNode *head = new ListNode(0), *tail = head;
        while (l1 || l2 || carry) {
            if (l1) {
                first = l1->val;
                l1 = l1->next;
            }
            else
                first = 0;
            
            if (l2) {
                second = l2->val;
                l2 = l2->next;
            }
            else
                second = 0;
            
            int temp = first+second+carry;
            tail->next = new ListNode(temp%10);
            tail = tail->next;
            carry = temp/10;
            
        }
        return head->next;
    }
} s;

int main()
{
    io();
    cout << " Solution: " << endl;
    ListNode *l1 = new ListNode(2, new ListNode(4, new ListNode(3)));
    ListNode *l2 = new ListNode(5, new ListNode(6, new ListNode(4)));
    auto res = s.addTwoNumbers(l1, l2);

    display(res);

    return 0;

}




