#include "io/io.h"

typedef TreeNode *tree;
class Solution
{
public:
    vector<int> res;
    void postorderTraversalRecursive(TreeNode *root)
    { //*TC: O(), SC: O()

        if (!root)
            return;
        vector<int> nodes;
        postorderTraversalRecursive(root->left);
        postorderTraversalRecursive(root->right);
        res.push_back(root->val);
    }

    vector<int> postorderTraversalIterative(TreeNode *root)
    { //*TC: O(n), SC: O(n)
        if (!root)
            return {};
        vector<int> nodes;
        stack<TreeNode *> nodestack;
        nodestack.push(root);

        while (nodestack.size())
        {

            auto curr = nodestack.top();

            if (curr == nullptr)
            {

                nodestack.pop();
                nodes.push_back(nodestack.top()->val);
                nodestack.pop();
                continue;
            }

            nodestack.push(nullptr);
            if (curr->right)
                nodestack.push(curr->right);
            if (curr->left)
                nodestack.push(curr->left);
        }

        return nodes;
    }
} s;

int main()
{
    io();
    tree one = new TreeNode(1);
    tree three = new TreeNode(3);
    tree two = new TreeNode(2, NULL, one);
    tree four = new TreeNode(4, two, three);

    cout << "Recursive Soution: " << endl;
    s.postorderTraversalRecursive(four);
    for (auto i : s.res)
    {
        cout << i << " ";
    }
    cout << endl
         << "Iterative Soution: " << endl;
    auto res = s.postorderTraversalIterative(four);
    for (auto i : res)
    {
        cout << i << " ";
    }

    return 0;
}
