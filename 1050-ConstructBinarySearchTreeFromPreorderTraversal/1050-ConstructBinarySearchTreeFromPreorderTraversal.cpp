// Last updated: 8/4/2026, 12:57:25 AM
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

TreeNode* find(vector<int> pre , int min , int max, int &index){
    if(index >= pre.size()){
        return nullptr;
    }
    if(pre[index] > max || pre[index] < min){
        return nullptr;

    }
    TreeNode* root = new TreeNode(pre[index]);
    
    index++;

    
    root->left = find(pre,min,root->val,index);
    root->right = find(pre,root->val,max,index );

    return root;
}
    TreeNode* bstFromPreorder(vector<int>& preorder) {

        int min = INT_MIN;
        int max = INT_MAX;
        int index = 0;
        //int size = preorder.size();

        return find(preorder , min,max,index);
        
    }
};