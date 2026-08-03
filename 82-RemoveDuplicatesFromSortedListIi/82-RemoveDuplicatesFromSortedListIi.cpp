// Last updated: 8/4/2026, 1:03:19 AM
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (!head) return nullptr;

        ListNode* temp = head;
        ListNode* prev = nullptr;

        while (temp) {
            bool dup = false;

            // detect duplicates
            while (temp->next && temp->val == temp->next->val) {
                dup = true;
                temp = temp->next; // skip duplicate nodes
            }

            if (dup) {
                // remove the whole duplicate block
                if (prev) {
                    prev->next = temp->next;
                } else {
                    head = temp->next; // if head was duplicate
                }
            } else {
                // move prev only if current was unique
                prev = temp;
            }

            temp = temp->next;
        }

        return head;
    }
};
