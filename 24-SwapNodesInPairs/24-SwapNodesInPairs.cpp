// Last updated: 8/4/2026, 1:04:10 AM
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
    ListNode* swapPairs(ListNode* head) {
        ListNode* temp = head;
        ListNode* prev = nullptr;
        while(temp && temp->next){
            prev = temp;
            temp = temp->next;
            swap(temp->val,prev->val);
            prev = temp;
            temp = temp->next;
        }
        return head;
        
    }
};