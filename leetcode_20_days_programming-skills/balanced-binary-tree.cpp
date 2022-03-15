#include "io/io.h"

class Solution{
public:

 bool isBalanced(TreeNode* root) {
        
        bool ans = true;
        //check if tree is balanced
        function<int (TreeNode*)> checkDepth = [&](auto root)->int{
          
            if(!root or !ans) return 0;
            
            int leftsub = checkDepth(root->left);
            int rightsub = checkDepth(root->right);
            
            if(abs(leftsub-rightsub) > 1) ans=false;
            
            return 1+max(leftsub,rightsub);
        }; //lambda ends here
        
        checkDepth(root);
        
        return ans;
    }   
} s;

int main(){
    io();
    auto root = new TreeNode(3,
    							new TreeNode(9),
    							new TreeNode(20,
    											new TreeNode(15),
    											new TreeNode(7)));
    cout << " Solution: " 
    <<  debugger::boolify(s.isBalanced(root)) << endl;

    return 0;
}

