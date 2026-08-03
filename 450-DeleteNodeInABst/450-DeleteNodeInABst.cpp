// Last updated: 8/4/2026, 12:59:40 AM
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        if (!root)
            return 0;

        if (root->val > key) {
            root->left = deleteNode(root->left, key);
            return root;

        } else if (root->val < key) {
            root->right = deleteNode(root->right, key);
            return root;
        } else { // child
            if (!root->left && !root->right) {
                delete root;
                return 0;
            }
            // 1 child
            if (!root->left) {
                TreeNode* temp = root->right;
                delete root;
                return temp;
            } else if (!root->right) {
                TreeNode* temp = root->left;
                delete root;
                return temp;
            }
            // 2 child
            else {
                // Find inorder successor (minimum in right subtree)
                TreeNode* temp = root->right;
                while (temp->left) {
                    temp = temp->left;
                }

                root->val = temp->val;  // Copy value
                root->right = deleteNode(root->right, temp->val);
            }
        }
        return root;
        
    }
};