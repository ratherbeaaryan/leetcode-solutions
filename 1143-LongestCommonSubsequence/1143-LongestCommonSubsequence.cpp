// Last updated: 1/28/2026, 2:13:17 PM
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
14    int minDepth(TreeNode* root) {
15        
16        if(!root) return 0;
17        if(!root->right){
18        return 1+ minDepth(root->left);
19    
20        }
21        if(!root->left){
22        return 1+minDepth(root->right);
23        
24        }
25
26        return 1+min(minDepth(root->left),minDepth(root->right));
27        
28    }
29};
30
31
32/*class Solution {
33public:
34    int minDepth(TreeNode* root) {
35        if (!root) return 0;
36
37        // If left subtree is missing, go right
38        if (!root->left)
39            return 1 + minDepth(root->right);
40
41        // If right subtree is missing, go left
42        if (!root->right)
43            return 1 + minDepth(root->left);
44
45        // Both children exist
46        return 1 + min(minDepth(root->left), minDepth(root->right));
47    }
48};*/
49