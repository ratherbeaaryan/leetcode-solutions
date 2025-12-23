// Last updated: 12/23/2025, 2:38:49 PM
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
14    vector<int> ans;
15    void preOrder(TreeNode* root){
16        if(root==NULL){
17            return;
18        }
19        ans.push_back(root->val);
20        preOrder(root->left);
21        preOrder(root->right);
22    }
23    vector<int> preorderTraversal(TreeNode* root) {
24
25        preOrder(root);
26        return ans;
27
28
29        
30    }
31};