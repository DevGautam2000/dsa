#include "io/io.h"

class Solution
{
public:
    TreeNode *insertIntoBST(TreeNode *root, int val)
    {

        if (!root)
            return new TreeNode(val);
        TreeNode *n = root;
        while (1)
            if (n->val < val)
                if (n->right)
                    n = n->right;
                else
                {
                    n->right = new TreeNode(val);
                    break;
                }
            else if (n->left)
                n = n->left;
            else
            {
                n->left = new TreeNode(val);
                break;
            }

        return root;
    }
} s;

int main()
{
    io();
    int val = 5;
    TreeNode *root = new TreeNode(4,
                                  new TreeNode(2,
                                               new TreeNode(1,
                                                            new TreeNode(7),
                                                            NULL),
                                               new TreeNode(3)),
                                  new TreeNode(7));

    cout << "Solution: " << endl;

    auto res = levelOrder(s.insertIntoBST(root, val));
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
