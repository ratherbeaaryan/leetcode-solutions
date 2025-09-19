// Last updated: 9/19/2025, 4:24:08 PM
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