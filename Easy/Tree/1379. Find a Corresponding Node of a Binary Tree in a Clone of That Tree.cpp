//recursion

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {

        TreeNode* ans;
        traverse(original, cloned, target, &ans);
        return ans;
    }

    void traverse(TreeNode* original, TreeNode* cloned, TreeNode* target, TreeNode** ans){
        if(!original) return;
        if(original == target) *ans = cloned;
        traverse(original->left, cloned->left, target, ans);
        traverse(original->right, cloned->right, target, ans);
    }
};


//stack

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {

        stack <TreeNode*> stOrg;
        stack <TreeNode*> stClon;

        while(original || !stOrg.empty() || !stClon.empty()){
            if(original){
                if(original == target) return cloned;
                stOrg.push(original);
                stClon.push(cloned);
                original = original->left;
                cloned = cloned->left;
            }else{
                original = stOrg.top();
                cloned = stClon.top();
                stOrg.pop();
                stClon.pop();
                original = original->right;
                cloned = cloned->right;
            }
        }

        return cloned;
        
    }
};