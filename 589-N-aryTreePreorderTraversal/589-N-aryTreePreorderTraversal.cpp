// Last updated: 1/24/2026, 10:48:04 AM
1/*
2// Definition for a Node.
3class Node {
4public:
5    int val;
6    vector<Node*> children;
7
8    Node() {}
9
10    Node(int _val) {
11        val = _val;
12    }
13
14    Node(int _val, vector<Node*> _children) {
15        val = _val;
16        children = _children;
17    }
18};
19*/
20
21class Solution {
22public:
23vector<int> ans;
24    void preOrder(Node* root){
25        if(root==NULL){
26            return;
27        }
28        ans.push_back(root->val);
29        for(Node* child: root->children){
30            preOrder(child);
31
32        }
33    }
34
35
36    vector<int> preorder(Node* root) {
37        
38        preOrder(root);
39        return ans;
40        
41
42        
43    }
44};