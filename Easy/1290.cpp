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
    int getDecimalValue(ListNode* head) {
        
        
        
        
        vector<int> v;
        
        
        while(head){
            if(head->val==0)
           v.push_back(0);
                else
                   v.push_back(1);
            // s+="head->val";
        head = head->next;
            
            
        }
        // reverse(v.begin(),v.end())
        int ans=0;
        int count=1;
        for(int i=(v.size()-1); i>=0 ;i--){
            if(v[i]==0)
            {
                
            }
            else{
                ans = ans+count;
            }
            
            count = count*2;
        }
        
        return ans;
        
            
    }
    
};