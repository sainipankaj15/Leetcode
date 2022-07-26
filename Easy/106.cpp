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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {

        ListNode *p = headA, *q = headB;

        int sizeA = 0, sizeB = 0;
        while (p != NULL)
        {
            sizeA++;
            p = p->next;
        }

        while (q != NULL)
        {
            sizeB++;
            q = q->next;
        }

        p = headA;
        q = headB;

        // ab hum kya karne wale h na ki
        //  jitna unke size mai difference h utna hi ek linked list ko aage bada dege means pointer ko
        //  jiska size bada h ushe linked list ko
        if (sizeA < sizeB)
        {
            for (int i = 1; i <= abs(sizeA - sizeB); ++i)
            {
                q = q->next;
            }
        }
        else
        {
            for (int i = 1; i <= abs(sizeA - sizeB); ++i)
            {
                p = p->next;
            }
        }

        // Now either p or q is forward by their difference moves
        // Now will move both together
        while (p && q)
        {
            if (p == q)
            {
                return p;
            }
            p = p->next;
            q = q->next;
        }

        // if they dont intersect then return NULL
        return NULL;
    }
};



// second method 
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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {

        ListNode *p = headA, *q = headB;

        while (p != q)
        {
            if (p == NULL)
                p = headB;
            else
                p = p->next;
            if (q == NULL)
                q = headA;
            else
                q = q->next;
        }

        // they will come out of the loop when p and q are equal
        // either both are pointing to null
        // or both are pointing to intersection point
        return p;
    }
};