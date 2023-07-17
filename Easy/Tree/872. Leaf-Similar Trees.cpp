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
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        
        string s1, s2;
        
        stack <TreeNode*> st;
        st.push(root1);
        
        while(!st.empty()){
            TreeNode* node = st.top();
            st.pop();
            if(!node->left && !node->right){
                s1+=to_string(node->val);
            }else{
                if(node->left) st.push(node->left);
                if(node->right) st.push(node->right);
            }
        }
        
        if(st.empty()) st.push(root2);
        
        while(!st.empty()){
            TreeNode* node = st.top();
            st.pop();
            if(!node->left && !node->right){
                s2+=to_string(node->val);
            }else{
                if(node->left) st.push(node->left);
                if(node->right) st.push(node->right);
            }
        }
        
        if(s1==s2) return true;
        
        return false;
    }
};