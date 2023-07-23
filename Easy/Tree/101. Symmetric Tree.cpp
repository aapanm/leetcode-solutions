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
    bool isSymmetric(TreeNode* root) {
        
        if(!root->left && !root->right) return true;
        
        stack <TreeNode*> st1;
        stack <TreeNode*> st2;
        
        if(root->left){
            if(!root->right) return false;
        }
        
        if(root->right){
            if(!root->left) return false;
        }
        
        if(root->left->val != root->right->val) return false;
        
        st1.push(root->left);
        st2.push(root->right);
        
        while(!st1.empty() && !st2.empty()){
            TreeNode* node1 = st1.top();
            TreeNode* node2 = st2.top();
            
            st1.pop();
            st2.pop();
            
            if(node1->left){
                if(!node2->right){
                    return false;
                }else{
                    if(node1->left->val != node2->right->val) return false;
                }
                st1.push(node1->left);
            }
            
            if(node1->right){
                if(!node2->left){
                    return false;
                }else{
                    if(node1->right->val != node2->left->val) return false;
                }
                st1.push(node1->right);
            }
            
             if(node2->right){
                if(!node1->left){
                    return false;
                }else{
                    if(node2->right->val != node1->left->val) return false;
                }
                st2.push(node2->right);
            }
            
            if(node2->left){
                if(!node1->right){
                    return false;
                }else{
                    if(node2->left->val != node1->right->val) return false;
                }
                st2.push(node2->left);
            }
            
        }
                
        if(!st1.empty()) return false;
        if(!st2.empty()) return false;
        
        return true;
    }
};