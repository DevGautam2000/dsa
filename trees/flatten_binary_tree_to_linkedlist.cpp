#include "io/io.h"

class Solution
{

    vector<int> p;

public:
    void preorder(TreeNode *r)
    {

        if (!r)
            return;

        p.push_back(r->val);
        preorder(r->left);
        preorder(r->right);
    }
    void flatten(TreeNode *root)
    {
        //* TC: O(n), SC: O(n)
        if (!root)
            return;
        preorder(root);

        TreeNode *node = root;

        int i;
        for (i = 1; i < p.size() && node->right; i++)
        {

            node->left = nullptr;
            node = node->right;
            node->val = p[i];
        }

        for (int j = i; j < p.size(); j++)
        {
            node->left = nullptr;
            node->right = new TreeNode(p[j]);
            node = node->right;
        }
    }

} s;

int main()
{
    io();
    TreeNode *root = new TreeNode(1,
                                  new TreeNode(2,
                                               new TreeNode(3),
                                               new TreeNode(4)),
                                  new TreeNode(5,
                                               NULL,
                                               new TreeNode(6)));

    TreeNode *root2 = new TreeNode(1,
                                   new TreeNode(2),
                                   NULL);

    cout << "Iterative Solution: " << endl;
    s.flatten(root);
    cout << endl;

    // displaying the values in level
    levelOrder(root);

    return 0;
}
