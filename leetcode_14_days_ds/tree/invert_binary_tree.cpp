#include "io/io.h"
typedef TreeNode *tree;

class Solution
{
public:
    TreeNode *invertTree(TreeNode *root)
    {
        //*TC: O(n), SC: O(n)
        queue<TreeNode *> q;
        TreeNode *node, *r;
        node = root;
        r = node;
        if (root)
            q.push(root);

        while (!q.empty())
        {

            node = q.front();
            q.pop();
            TreeNode *temp = node->right ? node->right : nullptr;
            //? q [7,2]

            if (node->right)
                q.push(node->right);
            if (node->left)
                q.push(node->left);
            node->right = node->left;
            node->left = temp;
        }

        return r;
    }
} s;

int main()
{
    io();
    cout << " Solution: " << endl;
    tree _9 = new TreeNode(9);
    tree _6 = new TreeNode(6);
    tree _3 = new TreeNode(3);
    tree _1 = new TreeNode(1);
    tree _7 = new TreeNode(7, _6, _9);
    tree _2 = new TreeNode(2, _1, _3);
    tree _4 = new TreeNode(4, _2, _7);

    levelOrder(_4);
    

    cout << " inverted tree " << endl;
    levelOrder(s.invertTree(_4));
    

    return 0;
}
