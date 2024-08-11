class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        
        if(!head || !head->next) return NULL;

        if(head->next == head) return head;

        ListNode *slow = head;
        ListNode *fast = head;

        bool loop = false;

        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;

            if(slow == fast){
                loop = true;
                break;
            }
        }

        if(loop){
            slow = head;

            while(slow != fast && fast->next != slow){
                slow = slow->next;
                fast = fast->next;
            }

            return slow;
        }

        return NULL;

    }
};