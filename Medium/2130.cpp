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
    int pairSum(ListNode* head) {
        vector<int> v;
        
        while(head){
            v.push_back(head->val);
            head = head->next;
        }
        
        int ans=0;
        for(int i=0;i<v.size()/2;i++){
            ans = max(ans,v[i]+v[v.size()-1-i]);
        }
        
        return ans;
    }
};





// Above method is brute force type i wrote what i think but we can imnprove becuase in above process we are taking more space 

class Solution
{
public:
    int pairSum(ListNode *head)
    {

        ListNode *slow = head, *fast = head;

        while (fast->next && fast->next->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        // came middle in the list
        ListNode *curr = NULL, *temp = NULL, *prev = NULL;

        temp = slow->next;
        while (temp)
        {
            prev = curr;
            curr = temp;
            temp = temp->next;
            curr->next = prev;
        }
        // rotated the list
        slow->next = curr;

        ListNode *start = head, *mid = slow->next;

        int ans = 0;

        // checking from start+from mid
        while (mid)
        {
            ans = max(ans, start->val + mid->val);
            mid = mid->next;
            start = start->next;
        }

        return ans;
    }
};