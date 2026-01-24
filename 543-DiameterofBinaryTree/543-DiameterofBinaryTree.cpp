// Last updated: 1/24/2026, 10:30:01 AM
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
14    int find(TreeNode* root,int &ans){
15        if(!root){
16            return 0;
17
18        }
19        int left = find(root->left,ans);
20        int right = find(root->right,ans);
21
22        ans = max(ans,left+right);
23        return 1+max(left,right);
24    }
25    int diameterOfBinaryTree(TreeNode* root) {
26
27       int ans = 0;
28       find(root,ans);
29       return ans;
30    }
31};