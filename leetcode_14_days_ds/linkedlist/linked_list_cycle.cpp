
#include "io/io.h"

class Solution
{
public:
    bool hasCycle(ListNode *head)
    {
        //*TC: O(), SC: O()
        if (!head)
            return false;

        ListNode *slow = head;
        ListNode *fast = head;

        while (fast && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast)
                return true;
        }

        return false;
    }

} s;

int main()
{
    //*TC: O(), SC: O()
    io();

    ListNode *one = new ListNode(3);
    ListNode *two = new ListNode(2);
    ListNode *three = new ListNode(1);
    ListNode *four = new ListNode(-4);
    ListNode *head = one;

    one->next = two;
    two->next = three;
    three->next = four;
    four->next = two;

    cout << " Solution: " << endl;
    cout << s.hasCycle(head);

    delete one;
    delete two;
    delete three;
    delete four;

    return 0;
}
