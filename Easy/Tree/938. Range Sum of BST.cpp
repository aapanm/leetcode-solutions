//binary search recursion

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
    int rangeSumBST(TreeNode* root, int low, int high) {
        int sum = 0;
        binary_search_tree(root, &high, &low, &sum);
        return sum;
    }

    void binary_search_tree(TreeNode *node, int *h, int *l, int *s){
        if(!node) return;
        if(node->val >= *l && node->val <= *h) *s = *s + node->val;
        if(node->val > *l) binary_search_tree(node->left, h, l , s);
        if(node->val < *h) binary_search_tree(node->right, h, l , s);
    }
};

//que

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
    int rangeSumBST(TreeNode* root, int low, int high) {
        int ans = 0;
        return rsum(root, low, high, ans);
    }

    int rsum(TreeNode *node, int l, int h, int sum){
        if(node->val >= l && node->val <= h) sum += node->val;
        if(node->left) sum = rsum(node->left, l , h, sum); else return sum;
        if(node->right) return sum = rsum(node->right, l , h, sum); else return sum;
    }
};

//another recursion

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
    int rangeSumBST(TreeNode* root, int low, int high) {
        int ans = 0;
        return rsum(root, low, high, ans);
    }

    int rsum(TreeNode *node, int l, int h, int sum){
        if(node->val >= l && node->val <= h) sum += node->val;
        if(node->left){
            if(node->val > l) sum = rsum(node->left, l , h, sum);
        }else{
            return sum;
        }
        if(node->right){
            if(node->val <= h) sum = rsum(node->right, l , h, sum);
        }else{
            return sum;
        }
        return sum;
    }
};