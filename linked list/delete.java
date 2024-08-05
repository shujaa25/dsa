class Solution {
    public void deleteNode(ListNode node) {
        
        if(node == null) return;

        ListNode temp = node;
        ListNode prev = null;
        while(temp.next != null){
            temp.val = temp.next.val;

            prev=temp;
            temp = temp.next;
        }
        prev.next = null;

    }
}