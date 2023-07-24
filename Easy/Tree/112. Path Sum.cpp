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
    bool hasPathSum(TreeNode* root, int targetSum) {
        
        if(!root) return false;
        
        queue <pair<TreeNode*, int>> q;
        q.push({root, 0});
        
        
        while(!q.empty()){
            int qsize = q.size();
            for(int i=0; i<qsize; ++i){
                
                TreeNode* node = q.front().first;
                int currSum = q.front().second;
                
                q.pop();
                
                int total = currSum + node->val;
                
                if(!node->left && !node->right){
                    if(total == targetSum) return true;
                }
                
                if(node->left) q.push({node->left, total});
                if(node->right) q.push({node->right, total});
            }
        }
        
        return false;
    }
};