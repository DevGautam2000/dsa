#include "io/io.h"
typedef TreeNode *tree;
class Solution
{
public:
    bool isMirrored(TreeNode *l, TreeNode *r)
    {
        if (!l || !r)
            return l == r;

        if (l->val != r->val)
            return false;

        return isMirrored(l->left, r->right) && isMirrored(l->right, r->left);
    }
    bool isSymmetric(TreeNode *root)
    { //*TC: O(), SC: O()
        return root == NULL || isMirrored(root->left, root->right);
    }
} s;

int main()
{
    io();

    tree _3_ = new TreeNode(3);
    tree _4_ = new TreeNode(4);
    tree _3 = new TreeNode(3);
    tree _4 = new TreeNode(4);
    tree _2_ = new TreeNode(2, NULL, _3_);
    tree _2 = new TreeNode(2, NULL, _3);
    tree _1 = new TreeNode(1, _2, _2_);
    cout << " Solution: " << s.isSymmetric(_1) << endl;

    return 0;
}
