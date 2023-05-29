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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return createBinaryTree(nums, 0, nums.size()-1);
    }
    
    TreeNode* createBinaryTree(vector<int>& arr, int l, int h){
        
        int m = (l+h)/2;
        
        TreeNode* root = new TreeNode();
        root->val = arr[m];
        
        if(l == h){
            root->left = NULL;
            root->right = NULL;
        }else{
            if(l==m){
                root->left = NULL;
            }else{
                root->left = createBinaryTree(arr, l, m-1);
            }
            
            if(m==h){
                root->right = NULL;
            }else{
                root->right = createBinaryTree(arr, m+1, h);
            }
        }
        
        return root;
    
    }
};