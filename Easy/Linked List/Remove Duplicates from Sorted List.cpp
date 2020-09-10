/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        
        if(!head){
            return head;
        }
        
        ListNode *tail, *node;
        node = head;
        tail = node;

    node = node->next;

    while(node){

        if(node->val == tail->val){
            tail->next = node->next;
            delete(node);
            node = tail->next;
        }else{
            tail = node;
            node = node->next;
        }
    }
        
        return head;
        
    }
};
