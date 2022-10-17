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
    bool evaluateTree(TreeNode* root) {
        
        return traverse(root);
    }

    bool traverse(TreeNode *node){
        
        if(!node->left && !node->right) return node->val;
        
        int l = traverse(node->left);
        int r = traverse(node->right);

        if(node->val == 2) return l|r;
        else return l&r;

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
    bool evaluateTree(TreeNode* root) {
        
        unordered_map <TreeNode*, int> m;
        stack <TreeNode*> st;

        TreeNode* prev = NULL;
        TreeNode* node = root;

        while (node || !st.empty()){

            cout << node <<endl;
            
            if(node){
                st.push(node);
                node = node->left;
            }else{
                node = st.top();
                
                if(node->right && node->right != prev){
                    node = node->right;
                }
                else{
                    if(!node->left && !node->right){
                        m[node] = node->val;
                    }else if (node->val == 2){
                        m[node] = m[node->left] | m[node->right];
                    }else{
                        m[node] = m[node->left] & m[node->right];
                    }

                    st.pop();
                    prev = node;
                    node = NULL;

                }
            }
        }

        return m[root];

    }
};