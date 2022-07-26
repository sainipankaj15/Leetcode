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
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        int total = 0, carry = 0;
        ListNode *ans = new ListNode(0);
        ListNode *curr = ans;

        while (l1 && l2)
        {
            total = l1->val + l2->val + carry;
            if (total < 10)
            {
                ListNode *newnode = new ListNode(total);
                curr->next = newnode;
                curr = curr->next;
                carry = 0;
            }
            else
            {
                carry = total / 10;
                ListNode *newnode = new ListNode(total % 10);
                curr->next = newnode;
                curr = curr->next;
            }

            l1 = l1->next;
            l2 = l2->next;
        }
        // till now either l1 or l2 has become zero
        // both also can become zero

        // but what if one of them is not zero
        if (l1 != NULL)
        {
            while (l1)
            {
                total = l1->val + carry;
                if (total < 10)
                {
                    ListNode *newnode = new ListNode(total);
                    curr->next = newnode;
                    curr = curr->next;
                    carry = 0;
                }
                else
                {
                    carry = total / 10;
                    ListNode *newnode = new ListNode(total % 10);
                    curr->next = newnode;
                    curr = curr->next;
                }

                l1 = l1->next;
            }
        }
        else
        {
            while (l2)
            {
                total = l2->val + carry;
                if (total < 10)
                {
                    ListNode *newnode = new ListNode(total);
                    curr->next = newnode;
                    curr = curr->next;
                    carry = 0;
                }
                else
                {
                    carry = total / 10;
                    ListNode *newnode = new ListNode(total % 10);
                    curr->next = newnode;
                    curr = curr->next;
                }

                l2 = l2->next;
            }
        }

        // till now both list became zero means has came at NULL
        // last point is carry have same value or zero we have to remeber that point

        if (carry)
        {
            ListNode *newnode = new ListNode(carry);
            curr->next = newnode;
            curr = curr->next;
        }

        return ans->next;
    }
};