#include "io/io.h"

class Solution{
public:

 TreeNode* deleteNode(TreeNode* root, int key) {
        if (!root) return nullptr;
        if (key < root->val) root->left = deleteNode(root->left, key);
        else if (key > root->val) root->right = deleteNode(root->right, key);
        else { //key == root->val
            if (!root->left || !root->right) {
                const TreeNode* toDelete = root;
                root = root->left ? root->left : root->right;
                delete toDelete;
            }
            else {
                const TreeNode* leftmost = findLeftmost(root->right);
                root->val = leftmost->val;
                root->right = deleteNode(root->right, leftmost->val);
            }
        }
        return root;
    }
    
 static constexpr const TreeNode* findLeftmost(const TreeNode* root) {
        if (!root || !root->left) return root;
        return findLeftmost(root->left);
    }  
} s;

int main(){
    io();
    cout << " Solution: " << endl;
    int key = 3;
 	auto root = new TreeNode(1,
    							new TreeNode(2),
    							new TreeNode(3));
    auto res = s.deleteNode(root,key);
    levelOrder(res);

    return 0;
}

