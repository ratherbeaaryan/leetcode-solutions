// Last updated: 8/4/2026, 1:04:45 AM
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
    string addsum(string a, string b) {
        int carry = 0, i = a.size() - 1, j = b.size() - 1;
        string result = "";
        while (i >= 0 || j >= 0 || carry) {
            int sum = carry;
            if (i >= 0) {
                sum += a[i] - '0';
                i--;
            }
            if (j >= 0) {
                sum += b[j] - '0';
                j--;
            }
            result.push_back((sum % 10) + '0');
            carry = sum / 10;
        }
        return result;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        string s1 = "";
        string s2 = "";

        while (temp1 != NULL) {
            s1 += to_string(temp1->val);
            temp1 = temp1->next;
        }
        while (temp2 != NULL) {
            s2 += to_string(temp2->val);
            temp2 = temp2->next;
        }
        reverse(s1.begin(), s1.end());
        reverse(s2.begin(), s2.end());

        string s = addsum(s1, s2);
        //reverse(s.begin(), s.end());
        ListNode* head = new ListNode(s[0]-'0');
        ListNode* curr = head;
        for (int i = 1; i < s.size(); i++) {
            curr->next= new ListNode(s[i]-'0');
            curr = curr->next;
        }

        return head;
    }
};