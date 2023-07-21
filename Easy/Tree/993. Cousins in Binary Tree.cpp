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
    bool isCousins(TreeNode* root, int x, int y) {
        
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty()){
            int qsize = q.size();
            int csn1 = 0, csn2 = 0;
            
            for(int i=0; i <qsize; ++i){
                
                TreeNode* node = q.front();
                q.pop();
                
                if(node->left && node->right){
                    if((node->left->val == x && node->right->val == y) || (node->left->val == y && node->right->val == x)){
                        return false;
                    }
                }
                
                if(node->val == x) csn1 = 1;
                if(node->val == y) csn2 = 1;
                if(csn1 && csn2) return true;
                
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
                
            }
        }
        
        return false;
        
    }
};