// Last updated: 8/4/2026, 1:03:34 AM
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || k == 0) return head;
        
        ListNode* temp = head;
        int n = 1;
        while (temp->next) {
            temp = temp->next;
            n++;
        }
        temp->next = head; // Make circular
        k = k % n;
        int stepsToNewHead = n - k;
        temp = head;
        for (int i = 1; i < stepsToNewHead; i++) {
            temp = temp->next;
        }
        ListNode* newHead = temp->next;
        temp->next = nullptr;
        return newHead;
    }
};
