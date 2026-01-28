// Last updated: 1/28/2026, 12:11:28 PM
1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
8 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
9 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
10 * };
11 */
12class Solution {
13public:
14    void dfs(TreeNode* root,int level,vector<int> &result){
15        if(!root) return;
16        if(level == result.size()){
17            result.push_back(root->val);
18        }
19        dfs(root->right,level+1,result);
20        dfs(root->left,level+1,result);
21    }
22    
23    vector<int> rightSideView(TreeNode* root) {
24        vector<int> result;
25        dfs(root,0,result);
26        return result;
27    }
28};