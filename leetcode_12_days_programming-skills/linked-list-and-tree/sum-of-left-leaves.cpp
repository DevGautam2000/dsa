#include "io/io.h"

class Solution{
public:
int sumOfLeftLeaves(TreeNode* root) {
        
         queue<TreeNode*> q;
        q.push(root);
            
        int sum=0;
        while(!q.empty()){
            
            auto curr = q.front(); q.pop();
            
            if(curr->left){
                q.push(curr->left);
                if(!curr->left->left and !curr->left->right)
                    sum += curr->left->val;
            }
            if(curr->right)  q.push(curr->right);
        }
        
        return sum;
    } 
} s;

int main(){
    io();
    
    auto root = new TreeNode(1,
    							new TreeNode(2,
    											new TreeNode(4),
    											new TreeNode(5)),
    							new TreeNode(3));

    cout << " Solution: "  << s.sumOfLeftLeaves(root) <<endl;

    return 0;
}

