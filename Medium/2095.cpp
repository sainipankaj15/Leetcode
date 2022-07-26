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
    ListNode *deleteMiddle(ListNode *head)
    {
        if (head == NULL || head->next == NULL)
            return NULL;

        ListNode *slow = head; // this pointer will go only one step
        ListNode *fast = head; // this pointer will go 2 steps at one time
        ListNode *pre = head;  // this pointer will follow slow pointer means it would be just previous node than slow

        while (fast && fast->next)
        {

            // when slow is first time then we dont want to move prevoius pointer that's why these 2 lines
            if (slow != head)
                pre = pre->next;

            slow = slow->next;
            fast = fast->next->next;
        }

        // now slow is pointing that node which we have to delete
        //  pre is pointing just prevoius node which we have to delete (meant prevoius node of slow)

        pre->next = pre->next->next;
        delete slow; // this line is not needed but also we wrote
        return head;
    }
};