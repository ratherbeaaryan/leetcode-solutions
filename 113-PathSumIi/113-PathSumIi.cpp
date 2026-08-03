// Last updated: 8/4/2026, 1:02:29 AM
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
void solve(TreeNode* root,int targetSum, vector<int>&ans, vector<vector<int>> &result){
    //vector<vector<int>> result;
        //int sum = 0;
        
        if(!root){
            return;
        }
        ans.push_back(root->val);
        targetSum = targetSum - root->val;
        
        
        if(!root->left && !root->right){
            if(targetSum == 0){
                result.push_back(ans);
                
            }
            
        }

        solve(root->left,targetSum,ans,result);
        solve(root->right,targetSum,ans,result);

        ans.pop_back();

}
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> result;
        vector<int> ans;
        
        solve(root,targetSum,ans,result);
        return result;


        
    }
};