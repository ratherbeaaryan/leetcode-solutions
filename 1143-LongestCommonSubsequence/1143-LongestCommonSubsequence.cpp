// Last updated: 1/28/2026, 12:16:37 PM
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
14    int maxDepth(TreeNode* root) {
15        if(!root){
16            return 0;
17        }
18
19        
20
21
22        int l = maxDepth(root->left);
23        int r = maxDepth(root->right);
24
25        return 1+max(l,r);
26        
27    }
28};