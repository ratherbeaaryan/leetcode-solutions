// Last updated: 8/4/2026, 12:57:17 AM
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
int sumtoroot(TreeNode* root, int curr){
    if(!root) return 0;

    curr = (curr<<1) | root->val;

    if(!root->left && !root->right){
        return curr;
    }

    return sumtoroot(root->left,curr)+sumtoroot(root->right,curr);



}
    int sumRootToLeaf(TreeNode* root) {
        return sumtoroot(root,0);
        
    }
};