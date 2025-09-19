// Last updated: 9/19/2025, 4:08:53 PM
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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* temp1 = headA;
        ListNode* temp2 = headB;
        int count1 = 0;
        int count2 = 0;

        while(temp1){
            count1++;
            temp1= temp1->next;

        }
        while(temp2){
            count2++;
            temp2 = temp2->next;
        }
        while(count1<count2){
            count2--;
            headB = headB->next;
        }
        while(count2<count1){
            count1--;
            headA = headA->next;
        }
        while(headA && headB && headA!=headB){
            headA=headA->next;
            headB=headB->next;
        }
        if(headA && headB){
            return headA;
        }
        return NULL;




        
    }
};