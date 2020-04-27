//判断单链表是否回文
1  快慢指针找到链表中点
2 把中点节点的写一个节点开始逆置单链表
3 比较俩单链表是否相等

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
    bool isPalindrome(ListNode* head) {
        if(head == NULL || head->next == NULL){
            return true;
        }
         ListNode* middle = getmiddleNode(head);//求出中间节点
         middle->next = reverslist(middle->next);
         ListNode* p=head;
         ListNode* q=middle->next;
         while(p!=NULL && q!=NULL && p->val == q->val){
            p=p->next;
            q=q->next;
        }
        return q==NULL;
    }
    ListNode* getmiddleNode(ListNode* head){
        if(head == NULL &&head->next == NULL){
            return head;
        }
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL && fast->next!=NULL && fast->next->next!=NULL){//此处一定要加fast->next->next!=NULL这个判断
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
    ListNode* reverslist(ListNode* head){
        ListNode* cur=NULL;
        while(head!=NULL){
            ListNode* next = head->next;
            head->next = cur;
            cur = head;
            head = next;
        }
        return cur;
    }
};
