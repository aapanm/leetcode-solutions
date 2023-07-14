//bfs

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
    int sumRootToLeaf(TreeNode* root) {
        
        queue <TreeNode*> q;
        queue <string> strq;
        vector <string> v;
        q.push(root);
        strq.push(to_string(root->val));
        
        while(q.size()){
            int count = q.size();
            for(int i=0; i<count; ++i){
                TreeNode* node = q.front();
                string prev = strq.front();
                string tmp;
                if(!node->left && !node->right){
                    v.push_back(prev);
                }else{
                    if(node->left){
                        q.push(node->left);
                        tmp = prev + to_string(node->left->val);
                        strq.push(tmp);
                    }
                    if(node->right){
                        q.push(node->right);
                        tmp = prev + to_string(node->right->val);
                        strq.push(tmp);
                    }
                }
                q.pop();
                strq.pop();
            }
        }
        
        int res = 0;
        
        for(int i=0; i<v.size(); ++i){
            res += binaryToDecimal(v[i]);
        }
        return res;
        
    }
    
    int binaryToDecimal(const std::string& binary) {
        int decimal = 0;
        int power = 0;
        for (int i = binary.length() - 1; i >= 0; --i) {
            if (binary[i] == '1') {
                decimal += static_cast<int>(pow(2, power));
            }
            power++;
        }

        return decimal;
    }
};