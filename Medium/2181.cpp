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
    ListNode* mergeNodes(ListNode* head) {
        ListNode *ans=NULL,*temp1=new ListNode(0);
        ans =  temp1;
        long long int sum=0;
        
        while(head!=NULL)
        {
          
            if(head->val==0 && sum!=0){
                ListNode *curr = new ListNode(sum);
                temp1->next = curr;
                temp1 = temp1->next;
                sum = 0;
               
            }
            sum+=head->val;
            head = head->next;
        }
        
        ans = ans->next;
        
        return ans;
        
    }
};