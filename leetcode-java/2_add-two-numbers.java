// https://leetcode-cn.com/problems/add-two-numbers/
// idea 保存代码格式化快捷键 option + command + L

/**
 * Definition for singly-linked list.
 * public class ListNode {
 * int val;
 * ListNode next;
 * ListNode(int x) { val = x; }
 * }
 */

class ListNode {
    int val;
    ListNode next;

    ListNode(int x) {
        val = x;
    }
}

class AddTwoNumbers {
    /**
     * @Description addTwoNumbers
     * @Date 2020/4/25 11:13
     * @Param [l1, l2]
     **/
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {

        ListNode dummyHead = new ListNode(0);
        ListNode p = l1;
        ListNode q = l2;
        ListNode currnet = dummyHead;
        int carry = 0;
        while (p != null || q != null){
            int value1 = (p != null) ? p.val : 0;
            int value2 = (q != null) ? q.val : 0;
            int sum = carry + value1+value2;
            carry = sum/10;
            currnet.next = new ListNode(sum%10);
            currnet = currnet.next;
            if(q != null){
                q = q.next;
            }
            if(p!=null){
                p=p.next;
            }
        }
        if(carry > 0){
            currnet.next = new ListNode(carry);
        }
        return dummyHead.next;
    }

    public static void main(String[] args) {
        int a = 19;
        int b = 10;
        System.out.println(a % b);
    }
}