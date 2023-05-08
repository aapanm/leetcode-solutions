//dfs (recursion)

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
    int maxDepth(TreeNode* root) {
        if(!root) return 0;
        return 1 + max(maxDepth(root->left), maxDepth(root->right));
    }
};

//dfs stack

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
    int maxDepth(TreeNode* root) {
        
        if(!root) return 0;
        
        stack <pair<TreeNode*, int>> st;
        
        st.push(pair(root, 1));
        int res = INT_MIN;
        
        while(!st.empty()){
            auto p = st.top();
            st.pop();
            
            if(p.second > res) res = p.second;
            
            if(p.first->left){
                st.push(pair(p.first->left, p.second+1));
            }
            if(p.first->right){
                st.push(pair(p.first->right, p.second+1));
            }
        }
        
        return res;
    }
};

//bfs (hash + queue)

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
    int maxDepth(TreeNode* root) {
        if(!root) return 0;
        queue <TreeNode*> q;
        unordered_map <TreeNode*, int> mp;
        q.push(root);
        mp[root] = 1;
        while(q.size()){
            TreeNode* node = q.front();
            if(node->left){
                q.push(node->left);
                mp[node->left] = mp[node] + 1;
            }
            if(node->right){
                q.push(node->right);
                mp[node->right] = mp[node] + 1;
            }
            q.pop();
        }
        int mxDpth = 0;
        for(auto it=mp.begin(); it!=mp.end(); it++){
            if(it->second > mxDpth) mxDpth = it->second;
        }
        return mxDpth;
    }
};

//bfs (queue)

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
    int maxDepth(TreeNode* root) {
        
        if(!root) return 0;
        
        queue <TreeNode*> q;
        q.push(root);
        
        int c = 0;
        
        while(q.size()){
            c++;
            int count = q.size();
            for(int i=0; i<count; ++i){
                TreeNode* node = q.front();
                if(node->left){
                    q.push(node->left);
                }
                if(node->right){
                    q.push(node->right);
                }
                q.pop();
            }
        }
        
        return c;
    }
};