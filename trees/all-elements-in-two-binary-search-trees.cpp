#include "io/io.h"

class Solution{
 vector<int> count;
public:
    
    void inorder(TreeNode *r){
        if(!r) return ;
        
        count.push_back(r->val);
        inorder(r->left);
        inorder(r->right);
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        
        //* TC: O(nlogn), SC: O(n)
        inorder(root1);
        inorder(root2);
        sort(count.begin(), count.end());
        return count;
    } 
} s;

int main(){
    io();
    cout << " Solution: " << endl;

    auto root1= new TreeNode(2,
    							new TreeNode(1),
    							new TreeNode(4));

    auto root2= new TreeNode(1,
    							new TreeNode(0),
    							new TreeNode(3));
    auto res = s.getAllElements(root1,root2);

    display(res);



    return 0;
}

