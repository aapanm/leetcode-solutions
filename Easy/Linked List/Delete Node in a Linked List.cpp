/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
       
        struct ListNode* l = node;
        
        while(node->next){
                node = node->next;
                l->val = node->val;
                if(node->next){
                    l = node;
                }
        }
        
        l->next = NULL;
        delete(node);
        
    }
};
