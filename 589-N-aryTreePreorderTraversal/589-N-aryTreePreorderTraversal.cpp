// Last updated: 1/24/2026, 11:49:53 AM
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
14    void calculatesum(TreeNode* root,int &sum){
15        if(!root){
16            return;
17        }
18        
19        if(root->left && !root->left->left && !root->left->right){
20            sum += root->left->val;
21        }
22        calculatesum(root->left,sum);
23        calculatesum(root->right,sum);
24        
25
26
27    } 
28    int sumOfLeftLeaves(TreeNode* root) {
29        int sum =0;
30        calculatesum(root,sum);
31
32
33
34        return sum;
35    }
36};