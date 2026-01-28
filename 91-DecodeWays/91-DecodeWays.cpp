// Last updated: 1/28/2026, 3:45:07 PM
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
14bool ismirror(TreeNode* r1, TreeNode* r2){
15    if(!r1 && !r2){
16        return 1;
17    }
18    if(!r1 || !r2){
19        return 0;
20
21    }
22    
23    if(r1->val != r2->val){
24        return false;
25    }
26    return (ismirror(r1->left, r2->right) && ismirror(r1->right , r2->left));
27}
28    bool isSymmetric(TreeNode* root) {
29        if(!root){
30            return true;
31        }
32        return ismirror(root->left,root->right);
33        
34        
35        
36        
37    }
38};