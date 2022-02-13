#include "io/io.h"

class Solution
{
    vector<int> nodes;

public:
    void inorder(TreeNode *root)
    {
        if (!root)
            return;

        //inorder traversal: left -> root -> right
        inorder(root->left);
        this->nodes.push_back(root->val);
        inorder(root->right);
    }

    bool findTarget(TreeNode *root, int k)
    {

        if (!root)
            return false;

        this->inorder(root);

        int left = 0, right = this->nodes.size() - 1;

        while (left < right)
        {

            int sum = this->nodes[left] + this->nodes[right];
            if (sum == k)
                return true;

            if (sum < k)
                left++;
            else
                right--;
        }

        return false;
    }
} s;

int main()
{
    io();
    int val = 4;
    TreeNode *root = new TreeNode(7,
                                  new TreeNode(2,
                                               new TreeNode(1,
                                                            new TreeNode(3),
                                                            NULL),
                                               new TreeNode(5)),
                                  new TreeNode(8));
    cout << "Solution: " << s.findTarget(root, val) << endl;

    return 0;
}
