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
    ListNode* reverseList(ListNode* head) {
        return rec(head, NULL);
    }
    
    ListNode *rec(ListNode* head, ListNode* r){
        if(!head){
            return r;
        }
        ListNode *q = new ListNode;
        q->val = head->val;
        q->next = r;
        return rec(head->next, q);
        
    }
};
