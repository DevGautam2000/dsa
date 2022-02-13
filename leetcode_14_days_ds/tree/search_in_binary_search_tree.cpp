#include "io/io.h"

class Solution
{
public:
    TreeNode *searchBST(TreeNode *root, int val)
    {

        queue<TreeNode *> q;

        if (root)
            q.push(root);

        while (q.size())
        {

            auto curr = q.front();
            q.pop();

            if (curr->val == val)
                return curr;
            if (curr->left)
                q.push(curr->left);
            if (curr->right)
                q.push(curr->right);
        }

        return NULL;
    }

    TreeNode *searchBSTConstantSpace(TreeNode *root, int val)
    {

        while (root && root->val != val)
            root = root->val < val ? root->right : root->left;

        return root;
    }
} s;

int main()
{
    io();
    int val = 4;
    TreeNode *root = new TreeNode(5,
                                  new TreeNode(4,
                                               new TreeNode(11,
                                                            new TreeNode(7),
                                                            new TreeNode(2)),
                                               NULL),
                                  new TreeNode(8,
                                               new TreeNode(13),
                                               new TreeNode(4,
                                                            NULL,
                                                            new TreeNode(1))));
    cout << "Solution: " << endl;

    auto res = levelOrder(s.searchBST(root, val));
    for (auto vec : res)
    {
        for (auto i : vec)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    cout << "Constant Space Solution: " << endl;
    res = levelOrder(s.searchBSTConstantSpace(root, val));
    for (auto vec : res)
    {
        for (auto i : vec)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}
