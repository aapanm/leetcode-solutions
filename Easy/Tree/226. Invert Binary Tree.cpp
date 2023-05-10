//dfs recursive

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
    TreeNode* invertTree(TreeNode* root) {
        
        if(!root) return NULL;
        
        TreeNode* tmp;
        tmp = root->left;
        root->left = root->right;
        root->right = tmp;
        
        invertTree(root->left);
        invertTree(root->right);
        
        return root;
    }
};

//dfs stack

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
    TreeNode* invertTree(TreeNode* root) {
        
        if(!root) return root;
        
        stack <TreeNode*> st;
        
        st.push(root);
        
        while(!st.empty()){
            
			TreeNode* node = st.top();
            st.pop();
            
			TreeNode* tmp;
            
			tmp = node->left;
            node->left = node->right;
            node->right = tmp;
            
			if(node->left) st.push(node->left);
            if(node->right) st.push(node->right);
        }
        
        return root;
    }
};