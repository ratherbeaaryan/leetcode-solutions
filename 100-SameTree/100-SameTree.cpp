// Last updated: 1/16/2026, 8:24:17 PM
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
14    bool isSameTree(TreeNode* p, TreeNode* q) {
15        if(!p && !q){
16            return 1;
17        }
18        if((!p && q)||(p && !q)){
19            return 0;
20        }
21        if(p->val != q->val){
22            return 0;
23        }
24        return isSameTree(p->right, q->right) && isSameTree(p->left,q->left);
25        
26    }
27};