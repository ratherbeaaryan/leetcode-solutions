// Last updated: 8/4/2026, 12:59:17 AM
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
    int findBottomLeftValue(TreeNode* root) {
        int ans = root->val;

        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            int level = q.size();
            for (int i = 0; i < level; i++) {
                TreeNode* temp = q.front();
                q.pop();
                if (i == 0) {
                    ans = temp->val;
                }

                if (temp->left) {
                    q.push(temp->left);
                }
                if (temp->right) {
                    q.push(temp->right);
                }
            }
        }
        return ans;
    }
};