// Last updated: 9/18/2025, 1:09:06 AM
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count = 0;
        ListNode* temp = head;
        ListNode* temp3 = head;
        while (temp != NULL) {
            temp = temp->next;
            count++;
        }

        if (n == count) {
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }

        int m = 0;
        while (m != count - n - 1) {
            m++;
            temp3 = temp3->next;
        }
        ListNode* temp2 = temp3->next;
        temp3->next = temp3->next->next;
        delete (temp2);

        return head;
    }
};