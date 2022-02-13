#include "io/io.h"

class Solution
{
    vector<int> n;

public:
    void inorder(TreeNode *r)
    {
        if (!r)
            return;

        inorder(r->left);
        this->n.push_back(r->val);
        inorder(r->right);
    }
    int kthSmallest(TreeNode *root, int k)
    {

        this->inorder(root);
        return this->n[k - 1];
    }
} s;

int main()
{
    io();
    int k = 1;
    TreeNode *root = new TreeNode(3,
                                  new TreeNode(1,
                                               NULL,
                                               new TreeNode(2)),
                                  new TreeNode(4));
    cout << " Solution: " << s.kthSmallest(root, k) << endl;

    return 0;
}
