#include "io/io.h"

class Solution
{
public:
    void deleteNode(ListNode *node)
    {

        node->val = node->next->val;
        node->next = node->next->next;
    }
} s;

int main()
{
    io();

    ListNode *node = new ListNode(5, new ListNode(1,
                                                  new ListNode(9)));
    ListNode *first = new ListNode(4,
                                   node);
    cout << " Solution: ";
    s.deleteNode(node);

    display(first);

    return 0;
}
