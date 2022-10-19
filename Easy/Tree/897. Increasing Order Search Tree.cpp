//stack

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
    TreeNode* increasingBST(TreeNode* root) {
        
        stack <TreeNode*> st;
        
        TreeNode* prev = NULL;  
        TreeNode* res = NULL;
        
        while(root || !st.empty()){
            if(root){
                st.push(root);
                root = root->left;
            }else{
                
                root = st.top();
                st.pop();
                
                if(prev){
                    prev->right = root;
                    prev->left = NULL;
                    prev = prev->right;
                }else{
                    prev = root;
                    res = prev;
                }
                root = root->right;
            }
        }
        
        prev->right = NULL;
        prev->left = NULL;
        
        return res;
        
    }
};