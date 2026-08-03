// Last updated: 8/4/2026, 1:02:42 AM
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> ans;
        queue<TreeNode*> q;

        if (!root) {
            return{};
        }
        q.push(root);

        while (!q.empty()) {
            int levelsize = q.size();
            vector<int> level;

            for (int i = 0; i < levelsize; i++) {
                TreeNode* curr = q.front();
                q.pop();

                level.push_back(curr->val);

                if (curr->right) {
                    q.push(curr->right);
                }
                if (curr->left) {
                    q.push(curr->left);
                }
            }
            reverse(level.begin(),level.end());

            ans.push_back(level);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};