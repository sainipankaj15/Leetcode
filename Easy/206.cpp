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
    ListNode* reverseList(ListNode* head) {
        if(head==NULL)
            return head;
               
        ListNode *ans=NULL;
        
        ListNode *curr = new ListNode(head->val);
        ans = curr;
             
        while(head->next!=NULL){
            head = head->next;
            curr = new ListNode(head->val);
            curr->next = ans;
            ans = curr;
        }
        
        return ans;
        
    }
};


// second method without using extra space
// using three pointer 

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *previous=NULL,*current=NULL,*forward=head;
        
        while(forward!=NULL){
            previous = current ;
            current = forward;
            forward = forward->next;
            current->next = previous;
        }
        
        return current;
    }
};