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
    bool hasCycle(ListNode *head) {
        
        if(!head){
            return false;
        }
        
        ListNode *p, *q;
        p = q = head;
        
        do{
            p=p->next;
            q=q->next;
            if(q != NULL){
                q=q->next;
            }else{
                continue;  
            }
            if(p == q){
                return true;
            }
        }while(p && q);
        
        return false;
    }
};