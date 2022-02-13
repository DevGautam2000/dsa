#include "io/io.h"

class Solution
{
public:
    ListNode *deleteDuplicates(ListNode *head)
    { //*TC: O(n), SC: O(1)
        if (!head)
            return head;

        ListNode *back = head;

        while (back && back->next)

            if (back->val == back->next->val)
                back->next = back->next->next;

            else
                back = back->next;

        return head;
    }

} s;

int main()
{

    io();
    ListNode *five2 = new ListNode(5);
    ListNode *five = new ListNode(5, five2);
    ListNode *four = new ListNode(4, five);
    ListNode *three2 = new ListNode(1);
    ListNode *three = new ListNode(1, three2);
    ListNode *one = new ListNode(1, three);

    display(s.deleteDuplicates(one));
    delete one;
    delete three2;
    delete three;
    delete four;
    delete five;
    delete five2;
    return 0;
}
