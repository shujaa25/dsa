//https://leetcode.com/problems/add-two-numbers/

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

    ListNode* reverse(ListNode *head){
        if(!head || !head->next) return head;

        ListNode* next = reverse(head->next);
        head->next->next = head;
        head->next = NULL;

        return next;
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode *res = new ListNode(0, NULL);
        
        while(l1 && l2){
            int x = l1->val+l2->val;
            x+=res->val;
            
            res->val = x%10;
            ListNode *n = new ListNode(x/10, res);
            res = n;
            

            l1=l1->next;
            l2=l2->next;
        }

        while(l1){
            int x = l1->val;
            x+=res->val;
            
            res->val = x%10;
            ListNode *n = new ListNode(x/10, res);
            res = n;

            l1=l1->next;
        }

        while(l2){
            int x = l2->val;
            x+=res->val;
            
            res->val = x%10;
            ListNode *n = new ListNode(x/10, res);
            res = n;

            l2=l2->next;
        }

        if(res->val == 0)
            return reverse(res->next);
        return reverse(res);

    }
};