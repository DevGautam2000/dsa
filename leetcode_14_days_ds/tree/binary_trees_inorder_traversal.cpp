
#include "io/io.h"

typedef TreeNode *tree;
class Solution
{

public:
    vector<int> res;
    vector<int> inorderTraversal(TreeNode *root)
    {
        //*TC: O(n), SC: O(n)
        if (!root)
            return {};
        vector<int> nodes;
        stack<TreeNode *> nodestack;
        TreeNode *curr = root;
        while (!nodestack.empty() || curr)

            if (curr)
            {
                nodestack.push(curr);
                curr = curr->left;
            }
            else
            {

                curr = nodestack.top();
                nodestack.pop();
                nodes.push_back(curr->val);
                curr = curr->right;
            }
        return nodes;
    }

    void inorderTraversalRecursive(TreeNode *root)
    {
        if (!root)
            return;

        inorderTraversalRecursive(root->left);
        res.push_back(root->val);
        inorderTraversalRecursive(root->right);
    }
} s;

int main()
{
    //*TC: O(), SC: O()
    io();
    tree one = new TreeNode(1);
    tree three = new TreeNode(3);
    tree two = new TreeNode(2, NULL, one);
    tree four = new TreeNode(4, two, three);

    cout << "Recursive Soution: " << endl;
    s.inorderTraversalRecursive(four);
    for (auto i : s.res)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "Iterative Solution: " << endl;
    auto res = s.inorderTraversal(four);
    for (auto i : res)
    {
        cout << i << " ";
    }
    return 0;
}
