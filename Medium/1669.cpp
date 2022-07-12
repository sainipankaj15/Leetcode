//To be honest compelte code I wrote and WTF is happening I dont know 

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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        

        // first create a head pointing to list1
        ListNode *head1 = list1;
        
        
        int count = 1;
        
        // Now we came in the list1 from where we have remove it
        while(count!=a){
            list1 = list1->next;
            count++;
        }
        
        // declared a another node variable 
        ListNode *traverse = list1->next;
        
        int countremove = b-a+1;
        
        // skipped those elements
        while(countremove--){
            traverse = traverse->next;
        }
        

        // added second list list2
        list1->next = list2;
        

        // 
        while(list1->next!=NULL){
            list1 = list1->next;
        }
        if(traverse!=NULL)
        list1->next = traverse;
        
        
        return head1;
    }
};


// Hurrree
// I wrote what i did