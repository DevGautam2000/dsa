#include "io/io.h"
typedef TreeNode *tree;

class Solution
{
public:
    vector<vector<int>> levelOrder(TreeNode *root)
    {

        vector<vector<int>> nodes;
        queue<TreeNode *> q;

        if (root)
            q.push(root);

        while (q.size())
        {
            vector<int> cur_level;
            int size = q.size();
            for (int i = 0; i < size; i++)
            {
                auto node = q.front();
                q.pop();
                cur_level.push_back(node->val);
                if (node->left)
                    q.push(node->left);
                if (node->right)
                    q.push(node->right);
            }
            nodes.push_back(cur_level);
        }

        return nodes;
    }
} s;

int main()
{
    io();

    tree _15 = new TreeNode(15);
    tree _7 = new TreeNode(7);
    tree _9 = new TreeNode(9);
    tree _20 = new TreeNode(20, _15, _7);
    tree _3 = new TreeNode(3, _9, _20);

    cout << " Solution: " << endl;

    auto res = s.levelOrder(_3);

    for (auto i : res)
    {
        for (auto j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}
