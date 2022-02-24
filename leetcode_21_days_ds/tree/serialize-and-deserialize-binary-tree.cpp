#include "io/io.h"

class Solution{
public:

    TreeNode* buildTree(istringstream& ss){
        string s;
        ss >> s;

        if (s == "null")
			return nullptr;

        TreeNode* node = new TreeNode(stoi(s));
        node->left = buildTree(ss);
        node->right = buildTree(ss);
            
        return node;

    }
   
    string serialize(TreeNode* root) {
        return !root ? " null" : " " + to_string(root->val) + serialize(root->left) + serialize(root->right);
    }
	
    TreeNode* deserialize(string data) {
        istringstream ss(data);
        return buildTree(ss);
    }
    
    
} sol;

int main(){
    io();
    cout << " Solution: "  << endl;

    auto root = new TreeNode(1,
    							new TreeNode(2),
    							new TreeNode(3));
    auto ser = sol.serialize(root);
    out(ser);
    auto ans = sol.deserialize(ser);
    levelOrder(ans);
    return 0;
}

