class Solution {
public:

    ListNode* rev(ListNode *node){
        if(!node || !node->next) return node;

        ListNode* next = rev(node->next);
        node->next->next = node;
        node->next = NULL;
        return next;
    }

    ListNode* reverseList(ListNode* head) {
        return rev(head);
    }
};