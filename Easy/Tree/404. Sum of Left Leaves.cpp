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
    int sumOfLeftLeaves(TreeNode* root) {
        stack <TreeNode*> st;
        st.push(root);
        int s = 0;
        while(!st.empty()){
            TreeNode* node = st.top();
            st.pop();
            if(node->left){
                if(!node->left->left && !node->left->right){
                    s += node->left->val;
                }
                st.push(node->left);
            }
            if(node->right) st.push(node->right);
        }
        return s;
    }
};