// Last updated: 12/23/2025, 2:42:05 PM
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
14vector<int> ans;
15        void postOrder(TreeNode *root){
16            if(root==NULL) return;
17
18            postOrder(root->left);
19            postOrder(root->right);
20            ans.push_back(root->val);
21
22        }
23    vector<int> postorderTraversal(TreeNode* root) {
24        postOrder(root);
25        return ans;
26        
27        
28    }
29};