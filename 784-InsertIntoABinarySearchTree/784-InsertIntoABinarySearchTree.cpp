// Last updated: 8/4/2026, 12:58:20 AM
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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        
        if(root == NULL){
            return new TreeNode(val);
        }
        if(root->val > val){
            root->left = insertIntoBST(root->left , val);
        }
        else{
            root->right = insertIntoBST(root->right,val);
        }
        return root;
        
    }
};