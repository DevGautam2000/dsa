#include "io/io.h"

class Solution{
public:

 TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
 		//* TC: O(m), SC: O(1)

        if(!t1 || !t2) return t1 ? t1 : t2 ? t2 : nullptr;
        
        t1->val+=t2->val;
        t1->left = mergeTrees(t1->left,t2->left);
        t1->right = mergeTrees(t1->right,t2->right);
        
        return t1;
    }  
} s;

int main(){
    io();


    cout << " Solution: " << endl;
    string tree1 = "1 3 2 5";
    string tree2 = "2 1 3 null 4 null 7";

    auto root1 = new TreeNode(1,
    							new TreeNode(3, 
    										new TreeNode(5), nullptr),
    							new TreeNode(2));
   auto root2 = new TreeNode(2,
    							new TreeNode(1,
    										nullptr,
    										new TreeNode(4)),
    							new TreeNode(3,
    										nullptr,
    										new TreeNode(7)));


   auto res = s.mergeTrees(root1,root2);
   tn::levelOrder(res);

    return 0;
}

