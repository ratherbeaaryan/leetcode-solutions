// Last updated: 8/4/2026, 12:58:55 AM
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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> avrg;
        queue<TreeNode*> q;
        q.push(root);
        double sum;
        double avg;
        

        if(!root){
            return {};
        }
        while(!q.empty()){
            int levelsize = q.size();
            sum = 0;
            avg = 0;
            for(int i=0;i<levelsize;i++){
                TreeNode* curr = q.front();
                q.pop();
                sum+=curr->val;
                if(curr->left){
                    q.push(curr->left);
                }
                if(curr->right){
                    q.push(curr->right);
                }
                


            }
            avg = sum/levelsize;
            avrg.push_back(avg);
            
        }

        return avrg;
        

        
    }
};