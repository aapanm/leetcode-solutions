//fast and slow pointer

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
    ListNode* middleNode(ListNode* head) {
        
        ListNode* p1 = head;
        ListNode* p2 = head;
        
        while(p2->next){
            p1 = p1->next;
            p2 = p2->next;
            if(p2->next) p2 = p2->next;
        }
        return p1;
    }
};

//regular interation

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
    ListNode* middleNode(ListNode* head) {
        
        ListNode* p=head;
        int cnt=0;
        
        while(p){
            cnt++;
            p=p->next;
        }
        cnt = cnt/2;
        while(cnt){
            head=head->next;
            cnt--;
        }
        
        return head;
    }
};