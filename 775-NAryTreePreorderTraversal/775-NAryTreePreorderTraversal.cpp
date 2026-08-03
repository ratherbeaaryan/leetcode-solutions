// Last updated: 8/4/2026, 12:58:27 AM
/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
vector<int> ans;
    void preOrder(Node* root){
        if(root==NULL){
            return;
        }
        ans.push_back(root->val);
        for(Node* child: root->children){
            preOrder(child);

        }
    }


    vector<int> preorder(Node* root) {
        
        preOrder(root);
        return ans;
        

        
    }
};