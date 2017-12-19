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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head == NULL){
            return head;
        }
        ListNode dummy(-1);
        dummy.next = head;
        int length=0;
        while(head){
            length++;
            head = head->next;
        }
        
        ListNode* first = &dummy;
        for (int i=0;i<length-n;i++){
            first = first->next;
        }
        first->next = first->next->next;

        return dummy.next;
    }
};
