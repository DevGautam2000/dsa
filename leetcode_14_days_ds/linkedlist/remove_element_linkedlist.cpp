
#include "io/io.h"

class Solution
{
public:
    ListNode *removeElements(ListNode *head, int val)
    {
        //*TC: O(n), SC: O(1)
        if (!head)
            return head;

        while (head && head->val == val)
            head = head->next;

        ListNode *curr = head;
        ListNode *prev = NULL;
        while (curr)
        {
            if (curr->val == val)
                prev->next = curr->next;

            else
                prev = curr;

            curr = curr->next;
        }
        return head;
    }

    ListNode *removeElementsRecursive(ListNode *head, int val)
    {
        return head;
    }
} s;

int main()
{
    //*TC: O(), SC: O()
    io();
    ListNode *six2 = new ListNode(6);
    ListNode *five = new ListNode(5, six2);
    ListNode *four = new ListNode(4, five);
    ListNode *three = new ListNode(3, four);
    ListNode *six = new ListNode(6, three);
    ListNode *two = new ListNode(2, six);
    ListNode *one = new ListNode(1, two);

    //? iterative solution
    cout << "iterative solution" << endl;
    display(s.removeElements(one, 3));
    cout<<endl;
    console_logsize(s.removeElements(one, 7));
    cout<<endl;

    //TODO: recursive solution
    cout << "recursive solution" << endl;
    display(s.removeElementsRecursive(one, 4));

    delete six2;
    delete five;
    delete four;
    delete three;
    delete six;
    delete two;
    delete one;

    return 0;
}
