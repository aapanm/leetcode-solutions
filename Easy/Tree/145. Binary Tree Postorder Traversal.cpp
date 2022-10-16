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
    vector<int> postorderTraversal(TreeNode* root) {
        vector <int> result;
        
        postorder_traversal(root, &result);
        
        return result;
    }
    
    void postorder_traversal(TreeNode* node, vector<int>* res){
        if(!node) return;
        postorder_traversal(node->left, res);
        postorder_traversal(node->right, res);
        res->push_back(node->val);
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
    vector<int> postorderTraversal(TreeNode* root) {
        
        vector <int> result;
        stack <TreeNode*> st;
        TreeNode* node = root;
        int c = 0;
        while(node || !st.empty()){
            c++;
            if(node){
                if(node->right){
                    st.push(node->right);
                }
                st.push(node);
                node = node->left;
            }else{
                node = st.top();
                st.pop();
                if(!st.empty() && st.top() == node->right){
                    TreeNode* tmp = node;
                    node = st.top();
                    st.pop();
                    st.push(tmp);
                }else{
                    result.push_back(node->val);
                    node = NULL;
                }
            }
        }
        
        return result;
    }
};