class Solution
{
public:
    bool isPalindrome(ListNode *head)
    {

        vector<int> v;

        while (head != NULL)
        {
            v.push_back(head->val);
            head = head->next;
        }

        for (int i = 0; i < v.size() / 2; i++)
        {
            if (v[i] != v[v.size() - 1 - i])
                return 0;
        }

        return 1;
    }
};


// second method and best method
class Solution
{
public:
    bool isPalindrome(ListNode *head)
    {

        ListNode *slow = head, *fast = head;
        while (fast->next && fast->next->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        // till now we came at middle
        // cout<<slow->val<<" "<<fast->val<<endl;

        // we will reverse remaining nodes
        ListNode *pre = NULL, *curr = NULL, *temp = NULL;
        temp = slow->next;

        while (temp)
        {
            pre = curr;
            curr = temp;
            temp = temp->next;
            curr->next = pre;
        }
        // we reversed remaining nodes(last nodes after middle)
        slow->next = curr;

        ListNode *start = head;
        ListNode *mid = slow->next;
        // condition will check only for middle if middle become null we have to stop it
        //  like list ka size 9 hota h tho middle 5 ko show kargaa now 6 7 8 9 ka comprasion 1 2 3 4 k saath ho jaayga
        //  and list ka size 8 hota h tho middle 4 hoga then 5 6 7 8 ka compare 1 2 3 4 k saath ho jaayga
        //  list ka size ki baat ho rahi h yaha
        while (mid)
        {
            if (mid->val != start->val)
                return 0;
            mid = mid->next;
            start = start->next;
        }

        return 1;
    }
};