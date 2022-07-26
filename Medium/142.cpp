/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
public:
    ListNode *detectCycle(ListNode *head)
    {
        // edge case
        if (head == NULL || head->next == NULL)
        {
            return NULL;
        }

        ListNode *slow = head, *fast = head;

        while (fast && fast->next)
        {

            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast)
                break;

            if (fast == NULL || fast->next == NULL)
                return NULL;
        }

        // if code is here it means there is a cycle

         // Now logic is that where slow and fast meets so distance(bewtween where they met and end of the node will equal to between where they met and first node of the list)
        
        while(head!=slow){
            head = head->next;
            slow = slow->next;
        }

        
        return head;
    }
};