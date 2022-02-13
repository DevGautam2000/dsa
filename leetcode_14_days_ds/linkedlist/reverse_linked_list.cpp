#include "io/io.h"

class Solution
{
public:
    ListNode *reverseList(ListNode *head)
    {
        //*TC: O(n), SC: O(1)

        if (!head)
            return head;

        ListNode *prev = NULL;
        ListNode *curr = head;

        while (curr)
        {

            head = head->next;
            curr->next = prev;
            prev = curr;
            curr = head;
        }

        return prev;
    }
} s;

int main()
{

    io();
    cout << " Solution: " << endl;

    ListNode *four = new ListNode(4);
    ListNode *three = new ListNode(3, four);
    ListNode *one = new ListNode(1, three);

    ListNode *six = new ListNode(6);
    ListNode *two = new ListNode(2, six);
    display(s.reverseList(two));

    //TODO: recursive solution

    delete four;
    delete three;
    delete one;
    delete six;
    delete two;
    return 0;
}
