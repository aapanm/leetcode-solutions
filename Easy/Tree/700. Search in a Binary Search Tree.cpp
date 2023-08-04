//stack solution

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
    TreeNode* searchBST(TreeNode* root, int val) {
        
        stack <TreeNode*> st;
        st.push(root);
        
        while(!st.empty()){
            TreeNode* node = st.top();
            if(node->val == val) return node;
            st.pop();
            if(node->left) st.push(node->left);
            if(node->right) st.push(node->right);
        }
        
        return NULL;
    }
};

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
    TreeNode* searchBST(TreeNode* root, int val) {
        return findNode(root, val);
    }
    
    TreeNode* findNode(TreeNode* node, int val){
        if(!node) return NULL;
        
        if(node->val == val) return node;
        
        TreeNode* n = findNode(node->left, val);
        if(!n) return findNode(node->right, val);
        return n;
    }
};

//bfs

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
    TreeNode* searchBST(TreeNode* root, int val) {
        queue <TreeNode*> q;
        q.push(root);
        
        while(!q.empty()){
            int qsize = q.size();
            for(int i=0; i<qsize; ++i){
                TreeNode* node = q.front();
                q.pop();
                
                if(node->val == val) return node;
                
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            } 
        }
        
        return NULL;
    }
};