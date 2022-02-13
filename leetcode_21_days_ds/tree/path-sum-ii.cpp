#include "io/io.h"

class Solution{
public:

 void pathStore(TreeNode* root, vector<int>& path, int targetSum, vector<vector<int>>& res){
        if(root == NULL)
            return;	
        path.push_back(root->val);
        if(root->right == NULL and root->left == NULL and targetSum == root->val){
            res.push_back(path);
            path.pop_back();
            return;
        }
        pathStore(root->left, path, targetSum - root->val, res);
        pathStore(root->right, path, targetSum - root->val, res); 
        path.pop_back();
    }
vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int> path;
        vector<vector<int>> res;
        pathStore(root, path, targetSum, res);
        return res;
    }  
} s;

int main(){
    io();
    cout << " Solution: "   << endl;
    int targetSum = 0;
    auto root = new TreeNode(1,
    							new TreeNode(2),
    							new TreeNode(3));
    auto res = s.pathSum(root,targetSum);
    display(res);


    return 0;
}

