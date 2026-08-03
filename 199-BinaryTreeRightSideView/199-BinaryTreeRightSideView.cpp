// Last updated: 8/4/2026, 1:01:26 AM
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

 // BFS
class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        queue<TreeNode*> q;

        if(!root){
            return {};
        }
        q.push(root);
        while(!q.empty()){

            int levelsize = q.size();

            for(int i=0;i<levelsize;i++){
            TreeNode* curr = q.front();
            q.pop();
            if(i == levelsize - 1){
            ans.push_back(curr->val);
            }
            if(curr->left){

                q.push(curr->left);
            }
            if(curr->right){
                q.push(curr->right);
            }
            
            
            }


        }
        return ans;
        
    }
};

// DFS
/*
class Solution {
public:
    void dfs(TreeNode* root,int level,vector<int> &result){
        if(!root) return;
        if(level == result.size()){
            result.push_back(root->val);
        }
        dfs(root->right,level+1,result);
        dfs(root->left,level+1,result);
    }
    
    vector<int> rightSideView(TreeNode* root) {
        vector<int> result;
        dfs(root,0,result);
        return result;
    }
};*/