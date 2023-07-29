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
    int minDepth(TreeNode* root) {
        queue <TreeNode*> q;
        
        if(!root) return 0;
        q.push(root);
        
        int dpth = 0;
        
        while(!q.empty()){
            dpth++;
            int qsize = q.size();
            
            for(int i=0; i<qsize; ++i){
                TreeNode* node = q.front();
                q.pop();
                
                if(!node->right && !node->left){
                    return dpth;
                }
                
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
                
            }
        }
        
        return dpth;
    }
};