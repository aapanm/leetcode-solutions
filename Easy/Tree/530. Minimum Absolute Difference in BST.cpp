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
    int getMinimumDifference(TreeNode* root) {
        vector <int> v;
        stack <TreeNode*> st;
        st.push(root);
        while(!st.empty()){
            TreeNode* node = st.top();
            v.push_back(node->val);
            st.pop();
            if(node->left) st.push(node->left);
            if(node->right) st.push(node->right);
        }
        sort(v.begin(), v.end());
        int minVal = INT_MAX;
        for(int i=0; i<v.size()-1; ++i){
            int val = v[i+1] - v[i];
            if(val < minVal) minVal = val;
        }
        return minVal;
    }
};