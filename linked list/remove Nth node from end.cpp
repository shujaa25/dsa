//https://leetcode.com/problems/remove-nth-node-from-end-of-list/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        if(!head) return head;

        ListNode* slow = head;
        ListNode* fast = head;

        for(int i=1;i<n;i++){
            if(fast->next)
                fast = fast->next;
            else break;
        }

        ListNode *prev = NULL;
        while(fast->next){
            fast=fast->next;
            prev = slow;
            slow=slow->next;
        }

        if(prev)
            prev->next = slow->next;
        else
            head=head->next;

        return head;
    }
};