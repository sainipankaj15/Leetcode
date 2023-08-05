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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode *newNode = new ListNode();
        
        ListNode *curr = head;
        
        while(curr->next != NULL){
            ListNode *newNode = new ListNode();
            int firstNumber = curr->val;
            int secondNumber = curr->next->val;
            int gcdBoth = __gcd(firstNumber,secondNumber);
            
            newNode -> val = gcdBoth;
            newNode -> next = curr-> next;
            curr -> next = newNode;
            curr = curr-> next->next;
        }
        
        return head;
    }
};