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
    vector<int> findMode(TreeNode* root) {
        
        unordered_map <int, int> mp;
        
        stack <TreeNode*> st;
        st.push(root);
        int mx = INT_MIN;
        
        while(!st.empty()){
            TreeNode* node = st.top();
            st.pop();
            
            mp[node->val]++;
            if(mp[node->val] > mx) mx = mp[node->val];
            
            if(node->left) st.push(node->left);
            if(node->right) st.push(node->right);
        }
        
        vector <int> v;
        
        for(auto it=mp.begin(); it!=mp.end(); it++){
            if(it->second ==  mx) v.push_back(it->first);
        }
        
        return v;
        
    }
};