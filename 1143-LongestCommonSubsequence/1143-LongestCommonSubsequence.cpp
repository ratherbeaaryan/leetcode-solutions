// Last updated: 1/28/2026, 2:29:21 PM
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
14    TreeNode* invertTree(TreeNode* root) {
15
16        if(!root) return nullptr;
17        
18            swap(root->left,root->right);
19        invertTree(root->left);
20        invertTree(root->right);
21        
22        
23
24        return root;
25
26
27        
28    }
29};