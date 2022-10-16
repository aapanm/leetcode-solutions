//recursion

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
    vector<int> inorderTraversal(TreeNode* root) {
        
        vector <int> result;
        
        inorder_traversal(root, &result);
        
        return result;
        
    }
    
    void inorder_traversal(TreeNode* node, vector<int>* res){
        if(node ==  NULL) return;
        else{
            inorder_traversal(node->left, res);
            res->push_back(node->val);
            inorder_traversal(node->right, res);
        }
    }
};

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
    vector<int> inorderTraversal(TreeNode* root) {
        
        vector <int> result;
        stack <TreeNode*> st;
        
        while(root || !st.empty()){
            if(root){
                st.push(root);
                root = root->left;
            }else{
                root = st.top();
                result.push_back(root->val);
                st.pop();
                root = root->right;
            }
        }
        
        return result;
        
    }
};