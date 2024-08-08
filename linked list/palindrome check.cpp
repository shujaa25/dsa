class Solution {
public:

    ListNode* findMid(ListNode* head){
        ListNode *slow = head;
        ListNode *fast = head->next;

        while(fast && fast->next){
            fast = fast->next->next;
            slow = slow->next;
        }

        return slow->next;
    }

    ListNode* reverse(ListNode *node){
        if(!node || !node->next) return node;

        ListNode* next = reverse(node->next);
        node->next->next = node;
        node->next = NULL;
        return next;
    }

    bool isPalindrome(ListNode* head) {
        if(!head) return false;
        if(!head->next) return true;

        ListNode* mid = findMid(head);
        mid = reverse(mid);
        
        while(mid && head->val == mid->val){
            head=head->next;
            mid=mid->next;
        }

        if(!mid) return true;

        return false;
    }
};