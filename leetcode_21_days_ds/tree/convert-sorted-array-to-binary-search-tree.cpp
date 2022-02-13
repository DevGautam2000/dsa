#include "io/io.h"

class Solution{

TreeNode* sortedArrayToBST(vector<int>& nums, int start, int end){


        if(end<=start) return NULL; 
        int midIdx=(end+start)/2;
        TreeNode* root=new TreeNode(nums[midIdx]);
        root->left=sortedArrayToBST(nums, start, midIdx);
        root->right=sortedArrayToBST(nums, midIdx+1,end);
        return root;
    }


public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return sortedArrayToBST(nums, 0,nums.size());
    } 
} s;

int main(){
    io();
    cout << " Solution: " << endl;
    vector<int> nums = {-10,-3,0,4,9};
	levelOrder(s.sortedArrayToBST(nums));

/*

OUTPUT

    0 
  /   \
 -3    9 
 /    /
-10  5 

*/

    return 0;
}

