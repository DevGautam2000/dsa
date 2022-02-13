#include "io/io.h"

class Solution
{
public:
    bool hasPathSum(TreeNode *root, int targetSum)
    {
        //*TC: O(), SC: O()

        stack<TreeNode *> s;
        if (root)
            s.push(root);

        while (s.size())
        {

            auto node = s.top();
            s.pop();

            if (!node->left && !node->right &&
                targetSum == node->val)
                return true;
            if (node->left)
            {
                node->left->val += node->val;
                s.push(node->left);
            }
            if (node->right)
            {
                node->right->val += node->val;
                s.push(node->right);
            }
        }

        return false;
    }

} sobj;

int main()
{
    io();
    int targetSum = 22;
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
    cout << "Iterative Solution: " << sobj.hasPathSum(root, targetSum) << endl;
    return 0;
}
