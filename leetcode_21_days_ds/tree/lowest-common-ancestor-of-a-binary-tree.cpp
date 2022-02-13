#include "io/io.h"

class Solution{
public:

 TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
       
        if( root == p || root == q || root == NULL)
        return root;
        
        TreeNode * parent1 = lowestCommonAncestor(root->left, p, q);
        TreeNode * parent2 = lowestCommonAncestor(root->right, p, q);
        if( parent1 && parent2)
            return root;

        return parent1 ? parent1:parent2;
    }   
} s;

int main(){
    io();
    cout << " Solution: " << endl;

    auto p=new TreeNode(5), q = new TreeNode(1);
    auto root = new TreeNode(3,p,q);

	auto res = s.lowestCommonAncestor(root,p,q);
	cerr<<res->val;

    return 0;
}

