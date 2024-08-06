public class Solution {
    
    private int length(ListNode head){
        if(head == null) return 0;

        return length(head.next)+1;
    }
    
    public ListNode getIntersectionNode(ListNode headA, ListNode headB) {

        int lenA = length(headA);
        int lenB = length(headB);

        if(lenB > lenA){
            ListNode t = headA;
            headA = headB;
            headB = t;

            int temp = lenA;
            lenA = lenB;
            lenB = temp;
        }

        while(lenA-- != lenB){
            headA = headA.next;
        }

        if(headA == headB) return headA;

        while(headA != null && headB != null){
            if(headA.next == headB.next){
                return headA.next;
            }

            headA = headA.next;
            headB = headB.next;
        }
        
        return null;
    }
}