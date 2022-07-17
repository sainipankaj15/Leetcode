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
    ListNode *middleNode(ListNode *head)
    {
        ListNode *low = head;
        ListNode *speed = head;

        while (speed->next != NULL)
        {
            low = low->next;
            speed = speed->next;
            if (speed->next != NULL)
                speed = speed->next;
        }

        return low;
    }
};


//second method



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
    ListNode* middleNode(ListNode* head) {
        ListNode *low =  head, *speed = head ;
        
        while(speed!=NULL && speed->next!=NULL){
            low = low->next;
            speed = speed->next->next;
            speed = speed->next;
        }
        
        
        return low;
    }
};



// third method

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
    ListNode* middleNode(ListNode* head) {
        
        int count=0;
        ListNode* newhead=head;
        
        while(newhead!=NULL){
            count++;
            newhead = newhead->next;
        }
     
        count/=2;
        
        while(count--){
            head = head->next;
        }
        
        
        return head;
         
    }
};