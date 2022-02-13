#include "io/io.h"

class Solution{
 int sum=0;
public:
    
    void preorder(TreeNode *r,int low,int high){
        if(!r) return;
        
        if(r->val<=high && r->val>=low) sum+=r->val;
        preorder(r->left,low,high);
        preorder(r->right,low,high);
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        
        if(!root) return -1;
        
        preorder(root,low,high);
        
        return sum;
        
    }  
} s;

int main(){
    io();
    cout << " Solution: "  << endl;


    TreeNode *r = new TreeNode(10,
    							new TreeNode(5),
    							new TreeNode(15));
    int low=5;
    int high =15;

    cout<<s.rangeSumBST(r,low,high)<<endl;

    return 0;
}

