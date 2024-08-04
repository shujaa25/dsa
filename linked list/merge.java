class Solution {
    public ListNode mergeTwoLists(ListNode list1, ListNode list2) {
        
        if(list1==null && list2==null) return list2;
        if(list1==null && list2 != null) return list2;
        if(list1!=null && list2 == null) return list1;
        

        ListNode a = list1;
        ListNode b = list2;

        ListNode cHead = null;
        ListNode c = null;

        if(a.val < b.val){
            cHead = a;
            a = a.next;
        }else{
            cHead = b;
            b = b.next;
        }

        c = cHead;

        while(a != null && b != null){
            if(a.val < b.val){
                c.next = a;
                c = a;
                a = a.next;
            }else{
                c.next = b;
                c = b;
                b = b.next;
            }
        }

        while(a != null){
            c.next = a;
            c = a;
            a = a.next;
        }

        while(b != null){
            c.next = b;
            c = b;
            b = b.next;
        }

        c.next = null;

        return cHead;

    }
}