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

    ListNode* rotateRight(ListNode* head, int k) {
        
        if(!head || !head->next) return head;

        if(k==0) return head;

        ListNode *slow = head;
        ListNode *fast = head;

        for(int i=1;i<k;i++){

            if(i+1==k && fast->next && !fast->next->next) return head;

            if(!fast->next){
                k = k%i;
                if(k!=0) k+=1;
                else return head;
                i = 1;
                fast = slow;
            }else{
                fast=fast->next;
            }
        }

        ListNode *first_end = NULL;
        while(fast->next){
            fast = fast->next;
            first_end = slow;
            slow = slow->next;
        }

        

        if(first_end)
            first_end->next = NULL;

        first_end = head;

        head = reverse(head);
        slow = reverse(slow);

        first_end->next = fast;



        return reverse(head);



    }
};