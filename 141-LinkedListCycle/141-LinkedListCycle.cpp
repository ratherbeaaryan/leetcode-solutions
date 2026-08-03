// Last updated: 8/4/2026, 1:02:09 AM
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
        if(head==NULL || head->next==NULL){
            return NULL;
        }
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
            if(slow==fast){
                break;
            }
        }
        if(slow!=fast){
            return NULL;
        }

        ListNode* entry = head;
        while(entry != slow) {
            entry = entry->next;
            slow  = slow->next;
        }
        return entry;

    }
};