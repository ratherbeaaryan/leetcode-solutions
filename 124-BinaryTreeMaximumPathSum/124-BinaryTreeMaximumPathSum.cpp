// Last updated: 8/4/2026, 1:02:26 AM
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
int maxSum;
int solve(TreeNode* root){
    if(!root) return 0;

    int l = solve(root->left);
    int r = solve(root->right);

    int foundinside = l+r+ root->val;
    int anyonegood = max(l,r) + root->val;
    int onlyrootgood = root->val;

    maxSum = max({maxSum,foundinside,anyonegood,onlyrootgood});

    return max(anyonegood,onlyrootgood);
}
    int maxPathSum(TreeNode* root) {
        maxSum = INT_MIN;

        solve(root);
        return maxSum;
        
        
        
    }
};