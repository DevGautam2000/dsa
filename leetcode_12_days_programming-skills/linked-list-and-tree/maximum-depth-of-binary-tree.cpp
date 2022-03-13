#include "io/io.h"
typedef TreeNode *tree;
class Solution
{
public:
    int height = -1;
    int lh = 0, rh = 0;

    void maxDepthRecursiveVoid(TreeNode *root)
    {

        if (!root)
            return;

        if (root->left){
            lh++;
            maxDepthRecursiveVoid(root->left);
        }
        if (root->right){
            rh++;
            maxDepthRecursiveVoid(root->right);
        }

        height = max(height, max(lh, rh));
    }

    int maxDepthRecursive(TreeNode *root){ 
    //* TC: O(n), SC: O(1)

        if (!root)
            return 0;

        return max(maxDepthRecursive(root->left) + 1, maxDepthRecursive(root->right) + 1);
    }

    int maxDepth(TreeNode *root){
     //* TC: O(n), SC: O(n)

        // using a queue

        queue<TreeNode *> q;
        if (root)
            q.push(root);
        int depth = 0;
        while (!q.empty()){
            depth++; //if a node exists in queue increase depth;

            //! this is an important step as
            //! for each iteration the queue size is changing
            int size = q.size();
            for (int i = 0; i < size; i++){
                auto f = q.front();
                q.pop();

                if (f->left)
                    q.push(f->left);
                if (f->right)
                    q.push(f->right);
            }
        }

        return depth;
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

    tree _2 = new TreeNode(2);
    tree _1 = new TreeNode(1, NULL, _2);
    s.maxDepthRecursiveVoid(_3);
    cout << "Recursive Solution: " << endl;
    cout << "1: " << s.height + 1 << endl;
    cout << "2: " << s.maxDepthRecursive(_3) << endl;
    cout << "Iterative Solution: " << s.maxDepth(_3);

    return 0;
}
