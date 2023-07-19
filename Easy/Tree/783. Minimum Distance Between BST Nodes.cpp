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
    int minDiffInBST(TreeNode* root) {
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
        int minDis = INT_MAX;
        for(int i=0; i<v.size()-1; ++i){
            int dis = v[i+1] - v[i];
            if(dis < minDis) minDis = dis;
        }
        return minDis;
    }
};