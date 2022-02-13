#include "io/io.h"

class Solution{
public:
 int ans=INT_MIN;


 //! RECURSIVE APPROACH

 void maxDepth(TreeNode *root , int depth){    

 		//* Top down approach

 		//! DEFINITION
 		//? "Top-down" means that in each recursive call,
 		//? we will visit the node first to come up with some 
 		//? values, and pass these values to its children when
 		//? calling the function recursively. 
 		//* So the "top-down" solution can be considered as a 
 		//* kind of preorder traversal. 

 		//base case
 		if(!root) return;

 		//check for leaf node
 		if(!root->left && !root->right)
 			ans = max(ans,depth);

 		maxDepth(root->left,depth+1);
 		maxDepth(root->right, depth+1);

 }   

 int maxDepth(TreeNode *root){

	 	//* Bottom up approach

	 	//! DEFINITION
	 	//? "Bottom-up" is another recursive solution. 
	 	//? In each recursive call, we will firstly call the function 
	 	//? recursively for all the children nodes and then come up 
	 	//? with the answer according to the returned values and the 
	 	//? value of the current node itself. 
	 	//* This process can be regarded as a kind of postorder traversal.


 		//! x = max(l, r) + 1. --> important formula
 		/*
		means that the value of depth can be retrieved by 
 		getting the max of left and right subtree of the root and
 		adding 1 to it.
 		*/

 		//base case
 		if(!root) return 0;

 		int leftDepth = maxDepth(root->left);
 		int rightDepth = maxDepth(root->right);


 	return max(leftDepth,rightDepth)+1;

 }


 //! ITERATIVE APPROACH

int maxDepthIterative(TreeNode* root) { 
        //*TC: O(n), SC: O(n)

        // using a queue

        queue<TreeNode *> q;
        if (root)
            q.push(root);
        int depth = 0;
        while (!q.empty())
        {
            depth++; //if a node exists in queue increase depth;

            //! this is an important step as
            //! for each iteration the queue size is changing
            int size = q.size();
            for (int i = 0; i < size; i++)
            {
                auto f = q.front();
                q.pop();

                if (f->left)
                    q.push(f->left);
                if (f->right)
                    q.push(f->right);
            }
        }

        return depth;
    }

} s;

int main(){
    io();
    
    auto root = new TreeNode(1,
    							new TreeNode(2,new TreeNode(4),nullptr),
    							new TreeNode(3));

    //actual tree

    /*
    	1
       / \
      2   3
     /
    4 

    */

    cout << "Top down approach: ";
    s.maxDepth(root,1);
    cout<<s.ans<<endl;

    cout << "Bottom Up approach: ";
    cout<<s.maxDepth(root)<<endl;

    cout << "Iterative approach: ";
    cout<<s.maxDepthIterative(root);
    return 0;
}

