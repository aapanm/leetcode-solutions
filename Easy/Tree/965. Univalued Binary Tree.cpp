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
    bool isUnivalTree(TreeNode* root) {
        
        stack<TreeNode*> st;
        st.push(root);
        
        int val = root->val;
        
        while(!st.empty()){
            TreeNode* node = st.top();
            if(node->val != val) return false;
            st.pop();
            if(node->left) st.push(node->left);
            if(node->right) st.push(node->right);
        }
        
        return true;
    }
};