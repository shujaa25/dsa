//https://leetcode.com/problems/middle-of-the-linked-list/

class Solution {
    public ListNode middleNode(ListNode head) {
        
        ListNode slow = head;
        ListNode fast = head.next;

        int n = 0;

        while(fast != null && fast.next != null){
            fast = fast.next.next;
            slow = slow.next;
            n++;
        }

        ListNode mid = slow;

        while(slow!=null){
            slow = slow.next;
            n++;
        }

        if(n%2 == 0)
            return mid.next;

        return mid;
    }
}