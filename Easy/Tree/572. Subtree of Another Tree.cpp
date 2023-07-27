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
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        
        stack <TreeNode*> st;
        st.push(root);
        
        
        TreeNode* similarRoot = NULL;
        
        while(!st.empty()){
            TreeNode* node = st.top();
            st.pop();
            
            if(isSimilar(node, subRoot)) return true;
            
            if(node->left) st.push(node->left);
            if(node->right) st.push(node->right);
        }
        
        return false;
        
        
    }
    
    bool isSimilar(TreeNode* node, TreeNode* subRoot){
        
        stack <TreeNode*> st1;
        stack <TreeNode*> st2;
        
        st1.push(node);
        st2.push(subRoot);
        
        while(!st1.empty() && !st2.empty()){
            TreeNode* node1 = st1.top();
            TreeNode* node2 = st2.top();
            
            st1.pop();
            st2.pop();
            
            if(node1->val != node2->val) return false;
            
            if(node1->left){
                if(!node2->left) return false;
                st1.push(node1->left);
            }
            if(node1->right){
                if(!node2->right) return false;
                st1.push(node1->right);  
            } 
            
            if(node2->left){
                if(!node1->left) return false;
                st2.push(node2->left);
            }
            
            if(node2->right){
                if(!node1->right) return false;
                st2.push(node2->right);
            }
        }
        
        if(!st1.empty()) return false;
        if(!st2.empty()) return false;
        
        return true;
    }
};