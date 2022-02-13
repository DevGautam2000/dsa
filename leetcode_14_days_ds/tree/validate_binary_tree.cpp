#include "io/io.h"

class Solution
{
    vector<int> res;
    vector<int> res_sort;

public:
    void inorderTraversalRecursive(TreeNode *root)
    {
        if (!root)
            return;

        inorderTraversalRecursive(root->left);
        this->res.push_back(root->val);
        inorderTraversalRecursive(root->right);
    }
    bool isValidBST(TreeNode *root)
    {

        this->inorderTraversalRecursive(root);
        this->res_sort = this->res;
        sort(this->res_sort.begin(), this->res_sort.end());

        if (this->res_sort != this->res)
            return false;
        else
        {
            for (int i = 0; i < this->res.size() - 1; i++)
            {
                if (res[i] == res[i + 1])
                    return false;
            }
        }

        return true;
    }
} s;

int main()
{
    io();
    TreeNode *root = new TreeNode(4,
                                  new TreeNode(2,
                                               new TreeNode(1,
                                                            new TreeNode(7),
                                                            NULL),
                                               new TreeNode(3)),
                                  new TreeNode(7));
    cout << " Solution: " << s.isValidBST(root) << endl;

    return 0;
}
