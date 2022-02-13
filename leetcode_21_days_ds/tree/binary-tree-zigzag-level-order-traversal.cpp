#include "io/io.h"

class Solution{
public:
vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        
        if(root == NULL)
            return ans;
        queue<TreeNode*> info;
        info.push(root);
        
        bool flag = false;
        
        while(!info.empty()){
            int n = info.size();
            vector<int> inter;
            
            for(; n>0; n--){
                TreeNode* top = info.front();
                info.pop();
                
                if(top->left != NULL)
                    info.push(top->left);
                
                if(top->right != NULL)
                    info.push(top->right);
            inter.push_back(top->val);
            }
            
            if(flag)
                reverse(inter.begin(), inter.end());
            
            ans.push_back(inter);
            
            flag = !flag;
  		}
        return ans; 
	} 
} s;

int main(){
    io();
    cout << " Solution: "  << endl;

     auto root = new TreeNode(1,
    							new TreeNode(2),
    							new TreeNode(3));
    auto res = s.zigzagLevelOrder(root);
    display(res);

    return 0;
}

