// Last updated: 8/4/2026, 1:02:36 AM
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
    int minDepth(TreeNode* root) {
        
        if(!root) return 0;
        if(!root->right){
        return 1+ minDepth(root->left);
    
        }
        if(!root->left){
        return 1+minDepth(root->right);
        
        }

        return 1+min(minDepth(root->left),minDepth(root->right));
        
    }
};


/*class Solution {
public:
    int minDepth(TreeNode* root) {
        if (!root) return 0;

        // If left subtree is missing, go right
        if (!root->left)
            return 1 + minDepth(root->right);

        // If right subtree is missing, go left
        if (!root->right)
            return 1 + minDepth(root->left);

        // Both children exist
        return 1 + min(minDepth(root->left), minDepth(root->right));
    }
};*/
