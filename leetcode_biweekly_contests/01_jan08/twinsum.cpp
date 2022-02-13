#include "io/io.h"

class Solution
{
public:
    int pairSum(ListNode *head)
    {

        vector<int> nodes;
        while (head)
        {
            nodes.push_back(head->val);
            head = head->next;
        }

        int maxsum = 0;
        int n = nodes.size();

        for (int i = 0; i < n; i++)
            maxsum = max(maxsum, nodes[i] + nodes[n - 1 - i]);

        return maxsum;
    }
} s;

int main()
{
    io(current_path());
    cout << " Solution: ";

    ListNode *root = new ListNode(5,
                                  new ListNode(4,
                                               new ListNode(2,
                                                            new ListNode(1))));

    cout << s.pairSum(root);
    return 0;
}