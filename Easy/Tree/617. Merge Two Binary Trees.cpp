//recursive

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
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {

        if(!root1) return root2;
        if(!root2) return root1;

        root1->val = root1->val+root2->val;
        root1->left = mergeTrees(root1->left, root2->left);
        root1->right = mergeTrees(root1->right, root2->right);

        return root1;
        
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
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        
        if(!root1) return root2;
        
        stack <vector<TreeNode*>> st;
        st.push({root1, root2});
        
        while(!st.empty()){
            
            vector <TreeNode*> v = {st.top()[0], st.top()[1]};
            st.pop();
            
            if(!v[0] || !v[1]) continue;
            
            v[0]->val += v[1]->val;
            
            if(!v[0]->left){
                v[0]->left = v[1]->left;
            }else{
                st.push({v[0]->left, v[1]->left});
            }
            
            if(!v[0]->right){
                v[0]->right = v[1]->right;
            }else{
                st.push({v[0]->right, v[1]->right});
            }
        }
        
        return root1;
    }
};