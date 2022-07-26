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
    ListNode *swapNodes(ListNode *head, int k)
    {

        int size = 0;
        ListNode *p = head;

        while (p != NULL)
        {
            size++;
            p = p->next;
        }

        int left = k - 1;
        int right = size - k;

        ListNode *leftnode = head;
        ListNode *rightnode = head;

        while (left--)
            leftnode = leftnode->next;

        while (right--)
            rightnode = rightnode->next;

        // if leftnode and rightnode are equal node then there is no need to change just return
        if (leftnode == rightnode)
            return head;

        // if they are not same then we will swap values
        // swapping the values;
        leftnode->val = leftnode->val + rightnode->val;
        rightnode->val = leftnode->val - rightnode->val;
        leftnode->val = leftnode->val - rightnode->val;

        return head;
    }
};