#include "io/io.h"

class Solution{
public:

	Node* connect(Node* root) {

	//* TC: O(n), SC: O(n)

        queue<Node*> q;
        
        if (root) q.push(root);
        
        while (q.size()) {
            int len = q.size();
            Node* curr;
            
            while (len--) {
                curr = q.front(), q.pop();
                curr->next = len ? q.front():NULL;
                if (curr->left) q.push(curr->left);
                if (curr->right) q.push(curr->right);         
            }
        }  
        
        return root;
    }  
} s;

int main(){
    io();
    cout << " Solution: "  ;elx(2);

    auto root = new Node(1, 
    						new Node(2,
    							new Node(4),
    							new Node(5)),
    						new Node(3,
    							new Node(6),
    							new Node(7)));

    auto resnode = s.connect(root);

    node::levelOrder(resnode);

    return 0;
}

