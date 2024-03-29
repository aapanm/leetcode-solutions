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
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return treeConstruction(nums, 0, nums.size());
    }
    
    TreeNode* treeConstruction(vector<int>& nums, int l, int r){
        
        if(l == r) return NULL;
        
        int max_idx = findMax(nums, l, r);

        TreeNode* root = new TreeNode();
        root->val = nums[max_idx];
        root->left = treeConstruction(nums, l, max_idx);
        root->right = treeConstruction(nums, max_idx+1, r);

        return root;
        
    }
    
    int findMax(vector<int>& nums, int l, int r){
        
        int max_i = l;
        
        for(int i = l; i < r; i++){
            if(nums[i] > nums[max_i]) max_i = i; 
        }
        
        return max_i;
    }
};

//o(n)

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
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        
        stack <TreeNode*> st;
        
        for(int i = 0; i < nums.size(); ++i){
            
            TreeNode* curr = new TreeNode(nums[i]);
            
            while(!st.empty() && st.top()->val < curr->val){
                curr->left = st.top();
                st.pop();
            }
            
            if(!st.empty()) st.top()->right = curr;
            
            st.push(curr);
        }
        
        while(st.size() > 1) st.pop();
        
        return st.top();
    }
};