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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL){
            return NULL;
        }
        ListNode dummy(-1);
        dummy.next = head;
        ListNode* tmp = &dummy;
        while(tmp->next && tmp->next->next){
            if(tmp->next->val == tmp->next->next->val){
                int value = tmp->next->val;
                while(tmp->next && tmp->next->val == value){
                    tmp->next = tmp->next->next;
                }
            }else{
                tmp=tmp->next;
            }
        }
        return dummy.next;
    }
};
