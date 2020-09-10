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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
        ListNode *l;
        ListNode *first;
        
        if(l1 && !l2){
            return l1;
        }else if(!l1 && l2){
            return l2;
        }else if(!l1 && !l2){
            return NULL;
        }
        
        if(l1->val > l2->val){
            first = l2;
            l = l2;
            l2=l2->next;
            
        }else{
            first = l1;
            l = l1;
            l1 = l1->next;
        }
        
        
        
        while(l1 && l2){
            if(l1->val < l2->val){
                l->next = l1;
                l = l1;
                l1 = l1->next;
                l->next = NULL;
            }else if(l1->val > l2->val){
                l->next = l2;
                l = l2;
                l2 = l2->next;
                l->next = NULL;                
            }else{
                l->next = l1;
                l = l1;
                l1 = l1->next;
                l->next = NULL;
                
            }
        }
        
        if(l1){
            l->next = l1;
        }
        
        if(l2){
            l->next = l2;
        }
        
        return first;
        
    }
};
