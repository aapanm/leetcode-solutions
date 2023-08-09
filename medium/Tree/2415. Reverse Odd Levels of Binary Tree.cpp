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
    TreeNode* reverseOddLevels(TreeNode* root) {
        
        queue <TreeNode*> q;
        vector <int> v;
        
        q.push(root);
        int lvl = 0;
        
        while(!q.empty()){
            
            vector <int> t;
            
            int qsize = q.size();
            
            for(int i=0; i<qsize; ++i){
                
                TreeNode* node = q.front();
                q.pop();
                
                if(lvl%2) node->val = v[qsize-i-1];
                
                if(node->left){
                    q.push(node->left); 
                    t.push_back(node->left->val);
                }
                if(node->right){
                    q.push(node->right); 
                    t.push_back(node->right->val);
                }
                
            }
            
            lvl++;
            v = t;
        }
        
        return root;
    }
};