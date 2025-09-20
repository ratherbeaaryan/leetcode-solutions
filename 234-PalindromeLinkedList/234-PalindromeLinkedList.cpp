// Last updated: 9/20/2025, 11:20:12 AM
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
    bool isPalindrome(ListNode* head) {
    
        ListNode* temp = head;
        int count = 0;

        // fix: count all nodes
        while(temp != NULL){
            count++;
            temp = temp->next;
        }

        // move temp to the middle
        temp = head;
        int count_first = count / 2;   // correct midpoint
        while(count_first > 0){
            temp = temp->next;
            count_first--;
        }

        // reverse from middle onwards
        ListNode* second = temp;
        ListNode* prev = NULL;
        while(second){
            ListNode* nxt = second->next;
            second->next = prev;
            prev = second;
            second = nxt; 
        }

        // compare first half and reversed second half
        ListNode* first = head;
        while(prev){
            if(prev->val != first->val){
                return false;
            }
            prev = prev->next;
            first = first->next;
        }

        return true;
    }
};
