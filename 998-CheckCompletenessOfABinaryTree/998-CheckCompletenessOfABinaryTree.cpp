// Last updated: 8/4/2026, 12:57:37 AM
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
class Solution {
public:
    bool isCompleteTree(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);

        bool isnull = false;

        if(!root){
            return 1;
        }

        while(!q.empty()){
            TreeNode* curr = q.front();
            q.pop();

            if(curr==NULL){
                isnull = true;
                
            }
            else{
                if(isnull){
                    return false;
                }
            
            q.push(curr->left);
            q.push(curr->right);
            }
        }


        return true;

        
    }
};