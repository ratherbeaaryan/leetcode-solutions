// Last updated: 1/27/2026, 2:40:21 PM
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
14    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
15        vector<vector<int>>ans;
16
17        if(!root){
18            return ans;
19        }
20
21        stack<TreeNode*> s1;
22        stack<TreeNode*> s2;
23        s1.push(root);
24
25        while(!s1.empty() || !s2.empty()){
26            if(!s1.empty()){
27                vector<int>level;
28                while(!s1.empty()){
29                    TreeNode* temp = s1.top();
30                    s1.pop();
31                    level.push_back(temp->val);
32
33                    if(temp->left){
34                        s2.push(temp->left);
35                    }
36                    if(temp->right){
37                        s2.push(temp->right);
38                    }
39
40                    
41
42                }
43                 ans.push_back(level);
44            }
45
46            else{
47                if(!s2.empty()){
48                vector<int>level;
49                while(!s2.empty()){
50                    TreeNode* temp = s2.top();
51                    s2.pop();
52                    level.push_back(temp->val);
53                    if(temp->right){
54                        s1.push(temp->right);
55                    }
56
57                    if(temp->left){
58                        s1.push(temp->left);
59                    }
60                    
61
62                    
63
64                }
65                 ans.push_back(level);
66            }
67            
68        }
69        }
70        return ans;
71
72        
73    }
74};