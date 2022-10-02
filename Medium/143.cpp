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
    void reorderList(ListNode* head) {
        ListNode* slow=head;
        
        while(slow->next && slow->next->next){
            ListNode* temp = slow->next;
            
            while(temp->next && temp->next->next){
                temp = temp->next;
            }
            
            temp->next->next = slow->next;
          
            slow->next = temp->next;
            temp->next = NULL;
            
            slow = slow->next->next;
        }

    }
};