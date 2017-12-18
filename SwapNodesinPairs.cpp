
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
    ListNode* swapPairs_one(ListNode* head) {
        if (head == NULL){
            return NULL;
        }
        ListNode* p=head;
        while(p && p->next){
            swap(p->val,p->next->val);
            p=p->next->next;
        }
        return head;
    }
    
    ListNode* swapPairs_two(ListNode* head){
        if (head == NULL || head->next == NULL){
            return head;
        }
        ListNode dummy(-1);
        dummy.next=head;
        head = &dummy;
        while(head->next != NULL && head->next->next!=NULL){
            ListNode* node1=head->next;
            ListNode* node2=head->next->next;
            head->next = node2;
            node1->next = node2->next;
            node2->next = node1;
            head = node1;
        }
        return dummy.next;
    }
};
