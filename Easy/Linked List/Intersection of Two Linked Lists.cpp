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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        if(headA == NULL || headB == NULL){
            return NULL;
        }
        
         stack <ListNode*> s1;
         stack <ListNode*> s2;
        
        ListNode *p;
        p = headA;
        while(p){
            s1.push(p);
            p = p->next;
        };
        p = headB;
        while(p){
            s2.push(p);
            p = p->next;
        };
        
        if(s1.top() != s2.top()){
            return NULL;
        }
        
        while(s1.top() == s2.top()){
            p = s1.top();
            s1.pop();
            s2.pop();
            if(s1.empty() || s2.empty()){
                break;
            }
            
        }
        
        
        return p;
    }
    
    
};
