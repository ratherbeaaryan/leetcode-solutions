// Last updated: 8/4/2026, 1:00:26 AM
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:
    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        if (!root)
            return "null,";

        return to_string(root->val)+ "," + serialize(root->left) +
               serialize(root->right);
    }

    // Decodes your encoded data to tree.
    TreeNode* deserializeHelper(string &data,int &i){
        if(data.substr(i, 4) == "null") {
            i += 5;  // skip "null,"
            return NULL;
        }
        int j = i;
        while(data[j] != ',') j++;
        
        int val = stoi(data.substr(i, j - i));
        i = j + 1;

        TreeNode* node = new TreeNode(val);
        node->left = deserializeHelper(data, i);
        node->right = deserializeHelper(data, i);

        return node;
    }

        TreeNode*
        deserialize(string data) {
        int i = 0;
        return deserializeHelper(data, i);
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));