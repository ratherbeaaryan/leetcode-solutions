// Last updated: 9/13/2025, 3:19:49 AM
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
    void deleteNode(ListNode* node) {
     node->val=node->next->val;
     node->next=node->next->next;
    }
};