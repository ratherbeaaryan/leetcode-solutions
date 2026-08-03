// Last updated: 8/4/2026, 1:03:05 AM
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
void find(TreeNode* root, long long &prev_val,bool &ans){
    if(!root) return;
    //left 
    find(root->left,prev_val,ans);
    //right
    if(prev_val >= root->val){
        ans = 0;
        return;
    }
    prev_val = root->val;
    find(root->right, prev_val,ans);
}
    bool isValidBST(TreeNode* root) {
    bool ans = 1;
    long long prev_val = LLONG_MIN;
    find(root,prev_val,ans);
    return ans;
        
    }
};