#include "io/io.h"

class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    { //*TC: O(), SC: O()
        ListNode *head = NULL;
        ListNode *tail = NULL;

        if (!list1 && !list2)
            return list1;

        list1->val < list2->val ? (head = list1, list1 = list1->next) : (head = list2, list2 = list2->next);
        tail = head;
        while (list1 && list2)
        {

            if (list1->val < list2->val)
            {
                tail->next = list1;
                list1 = list1->next;
            }
            else
            {
                tail->next = list2;
                list2 = list2->next;
            }
            tail = tail->next;
        }
        if (!list1)
            tail->next = list2;
        else
            tail->next = list1;

        return head;
    }
} s;

int main()
{

    io();
    ListNode *four = new ListNode(4);
    ListNode *two = new ListNode(2, four);
    ListNode *one = new ListNode(1, two);

    ListNode *four2 = new ListNode(4);
    ListNode *three2 = new ListNode(3, four2);
    ListNode *one2 = new ListNode(1, three2);

    ListNode *list1 = one;
    ListNode *list2 = one2;

    cout << " Solution: " << endl;
    display(s.mergeTwoLists(list1, list2));
    //TODO: recursive solution

    delete one;
    delete two;
    delete four;

    delete one2;
    delete three2;
    delete four2;
    return 0;
}
