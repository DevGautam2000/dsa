#pragma once
#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

namespace tn
{
    static void levelOrder(TreeNode *root)
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

       for(auto vec: nodes){
        for(auto i: vec){
            cerr<<i<<" ";
        }
        cerr<<endl<<endl;
        }
    }

    static vector<int> inorderTraversal(TreeNode *root)
    {
        //*TC: O(n), SC: O(n)
        if (!root)
            return {};
        vector<int> nodes;
        stack<TreeNode *> nodestack;
        TreeNode *curr = root;
        while (!nodestack.empty() || curr)

            if (curr)
            {
                nodestack.push(curr);
                curr = curr->left;
            }
            else
            {

                curr = nodestack.top();
                nodestack.pop();
                nodes.push_back(curr->val);
                curr = curr->right;
            }
        return nodes;
    }
}