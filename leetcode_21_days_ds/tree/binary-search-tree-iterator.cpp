#include "io/io.h"

class BSTIterator {

    vector<int> nodes;
    int curr = 0;
public:
     void inOrder(TreeNode* root) {
        if (!root)
            return;
        inOrder(root->left);
        nodes.push_back(root->val);
        inOrder(root->right);
    }
    
    BSTIterator(TreeNode* root) {
        inOrder(root);
    }
    
    int next() {
        curr++;
        return nodes[curr-1];
    }
    
    bool hasNext() {
        return curr != nodes.size();
    }
    

};


int main(){
    io();
    cout << " Solution: "  << endl;
    auto root = new tn::TreeNode(1,
    							new TreeNode(2),
    							new TreeNode(3));
    BSTIterator* obj = new BSTIterator(root);
 	int param_1 = obj->next();
 	bool param_2 = obj->hasNext();

 	out(param_1);
 	out(param_2);

    return 0;
}

