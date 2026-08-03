// Last updated: 8/4/2026, 1:03:08 AM
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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* curr = head;
        ListNode* prev = nullptr;
        int count = 1;
        int trav = right- left+1;
        while(count!=left){
            prev = curr;
            curr = curr->next;
            
            count++;
        }
        ListNode* connect = prev;
        ListNode* tail = curr;

        ListNode* prev2 = nullptr;
        while(trav>0){
            ListNode* nxt = curr->next;
            curr->next = prev2;
            prev2 = curr;
            curr = nxt;
            trav--;
        }

        if(connect){
            connect->next = prev2;
        }
        else{
            head = prev2;
        }
        tail->next = curr;

        return head;
        

        return prev;

        
    }
};