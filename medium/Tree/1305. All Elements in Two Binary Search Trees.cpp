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
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        
        vector <int> v;
        
        stack <TreeNode*> st;
        if(root1) st.push(root1);
        
        while(!st.empty()){
            TreeNode* node = st.top();
            st.pop();
            
            v.push_back(node->val);
            
            if(node->left) st.push(node->left);
            if(node->right) st.push(node->right);
        }
        
        if(root2) st.push(root2);
        
        while(!st.empty()){
            TreeNode* node = st.top();
            st.pop();
            
            v.push_back(node->val);
            
            if(node->left) st.push(node->left);
            if(node->right) st.push(node->right);
        }
        
        sort(v.begin(), v.end());
        return v;
    }
};