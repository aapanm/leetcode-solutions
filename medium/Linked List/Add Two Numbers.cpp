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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        if(!l1 || !l2){
           if(l1){
               if(l1->val > 9){
                   ListNode *c1 = new ListNode;
                   c1->val = 0;
                   c1->next = NULL;
                   l2 = c1;
                   return addTwoNumbers(l1, l2);
               }else{
                   return l1;
               }
           }else if(l2){
               return l2;
           }else{
               return NULL;
           }
        }
        
        ListNode *l = new ListNode;
        ListNode *c = new ListNode;
        c->val = 0;
        c->next = NULL;
        
        
        l->val  = l1->val + l2->val;  
        
        
        
        if(l->val > 9){
            l->val-=10;
            c->val = 1;
            
            if(l1->next){
                if(l1->next->next){
                    c->val = c->val + l1->next->val;
                    c->next = l1->next->next;
                    l1->next = c;
                }else{
                    c->val = c->val + l1->next->val;  
                    l1->next = c;
                }
            }else{
                l1->next = c;
            }     
        }
        
        l->next = addTwoNumbers(l1->next, l2->next);
        
        return l;
    }
};


