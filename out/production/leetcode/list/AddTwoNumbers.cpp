/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
 //解法1
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode phead(0);
        ListNode*p = &phead;
        int tmp =0;
        while(l1 != NULL || l2 != NULL || tmp != 0){
            int sum = (l1 ? l1->val :0) + (l2 ? l2->val :0) + tmp;
            p->next = new ListNode(sum % 10);
            tmp = sum/10;
            p = p->next;
            l1 = l1 ? l1->next : l1;
            l2 = l2 ? l2->next : l2;
        }
        return phead.next;
    }
};

//解法2
















