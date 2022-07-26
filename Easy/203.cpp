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
class Solution
{
public:
    ListNode *removeElements(ListNode *head, int val)
    {

        while (head != NULL && head->val == val)
        {
            head = head->next;
        }
        if (head == NULL)
            return NULL;

        ListNode *pre = head;
        ListNode *curr = head;

        while (curr != NULL)
        {

            if (curr->val == val)
            {
                pre->next = curr->next;
                curr = curr->next;
                continue ;
            }
            if (curr != head)
                pre = pre->next;
            if (curr)
                curr = curr->next;
        }

        return head;
    }
};