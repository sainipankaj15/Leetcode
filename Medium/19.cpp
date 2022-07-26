class Solution
{
public:
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        ListNode *p = head;
        int count = 0;
        while (p != NULL)
        {
            count++;
            p = p->next;
        }

        // if there is only one node then it will remove it and will return NULL
        if (count == 1)
            return NULL;
        int fromfront = count - n;

        // this is minus one because i will set one pointer to head already

        ListNode *last = head, *curr = head;
        if(fromfront==0){
            head = head->next;
        }
        else{
                while (fromfront--)
        {
            last = curr;
            curr = curr->next;
        }
            
        }
    

        // Now curr is pointing the node which we have to remove
        // and last is pointing the node which is just the previous node than curr
        
        last->next = curr->next;
    
        return head;
    }
};

// In above I do 2 traversal 
// first traversal for counting the nodes 
// then second traversal for removing the node
// but what if we allow only one traversal then we will do like this 

// second method

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        //Now we will do it in only one traversal 
        ListNode *slow=head,*fast=head;
        for(int i=1;i<=n;++i)
        fast = fast->next;
        // Now what can happen in n moves fast reached out of the linked list it means we have to remove last element (from last ) and remove first element (from first) so
        if(fast==NULL)
        return head->next;

        while(fast->next){
            fast = fast->next;
            slow = slow->next;
        }
        // Now by running above while loop 
        // we came at the end of linked list (at last node)
        // and we have to remove to next node which is pointed by slow->next



        // remove node 
        slow->next = slow->next->next;


        
        // here code finished
        return head;
    }
};