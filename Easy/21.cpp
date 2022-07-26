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
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        ListNode *ans = new ListNode(0);
        ListNode *curr = ans;

        while (list1 != NULL && list2 != NULL)
        {
            if (list1->val < list2->val)
            {
                ListNode *newelement = new ListNode(list1->val);
                curr->next = newelement;
                curr = curr->next;
                list1 = list1->next;
            }
            else
            {
                ListNode *newelement = new ListNode(list2->val);
                curr->next = newelement;
                curr = curr->next;
                list2 = list2->next;
            }
        }

        if (list1 != NULL)
        {
            curr->next = list1;
        }
        if (list2 != NULL)
        {
            curr->next = list2;
        }

        ans = ans->next;
        return ans;
    }
};

// In above approch i took another list which took an extra space 
// there is another method where we just take pointer and just connect the already exist node


// check this method 
class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        // first talk about edge cases
        if (list1 == NULL && list2 == NULL)
            return NULL;
        if (list1 == NULL && list2 != NULL)
            return list2;
        if (list1 != NULL && list2 == NULL)
            return list1;
        // here we covered edge cases

        // Now main code start here
        ListNode *ans = NULL, *curr = NULL;

        if (list1->val < list2->val)
        {
            ans = curr = list1;
            list1 = list1->next;
            curr->next = NULL;
        }
        else
        {
            ans = curr = list2;
            list2 = list2->next;
            curr->next = NULL;
        }

        while (list1 != NULL && list2 != NULL)
        {
            if (list1->val < list2->val)
            {
                curr->next = list1;
                curr = curr->next;
                list1 = list1->next;
                curr->next = NULL;
            }
            else{
                 curr->next = list2;
                curr = curr->next;
                list2 = list2->next;
                curr->next = NULL;
            }
        }

        if(list1!=NULL){
            curr->next = list1;
        }
        if(list2!=NULL){
            curr->next = list2;
        }


        return ans;
    }
};