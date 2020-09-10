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
    ListNode* removeElements(ListNode* head, int val) {
        
        if(!head){
            return head;
        }
        
        ListNode *t, *f;
        t = f = head;
        while(head){
            if(head->val == val){
                if(head == f){
                    t = head->next;
                    f = t;
                    delete(head);
                    head = t;
                }else{
                    t->next = head->next;
                    delete(head);
                    head = t->next;
                }
            }else{
                t = head;
                head = head->next;
            }
        }
        
        return f;
    }
};
