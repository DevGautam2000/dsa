#include "io/io.h"

typedef TreeNode *tree;

class Solution
{

public:
    vector<int> res;
    vector<int> preorderTraversal(TreeNode *root)
    {
        //*TC: O(), SC: O()
        if (!root)
            return {};

        vector<int> nodes;
        stack<TreeNode *> nodestack;
        nodestack.push(root);
        while (!nodestack.empty())
        {

            auto curr = nodestack.top();
            nodestack.pop();
            nodes.push_back(curr->val);

            if (curr->right)
                nodestack.push(curr->right);
            if (curr->left)
                nodestack.push(curr->left);
        }
        return nodes;
    }
    void preorderTraversalRecursive(TreeNode *root)
    {
        //! preorder - root,left,right
        if (!root)
            return;

        res.push_back(root->val);
        preorderTraversalRecursive(root->left);
        preorderTraversalRecursive(root->right);
    }

} s;

int main()
{

    io();
    tree one = new TreeNode(1);
    tree three = new TreeNode(3);
    tree two = new TreeNode(2, NULL, one);
    tree four = new TreeNode(4, two, three);

    cout << "Recursive Solution: " << endl;
    s.preorderTraversalRecursive(four);
    for (auto i : s.res)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "Solution: " << endl;
    auto res = s.preorderTraversal(four);
    for (auto i : res)
    {
        cout << i << " ";
    }
    return 0;
}
