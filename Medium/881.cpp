class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
     
        int ans=0;
        
        
        sort(people.begin(),people.end());
        
        int i=0;
        int j = people.size()-1;
        
        while(i<j){
            
            if(people[i]+people[j]>limit){
                ans++;
                j--;
            }
            else if(people[i]+people[j]<=limit){
                i++;
                j--;
                ans++;                
            }
            if(i==j){
                ans++;
                break ;
            }
        }
        
        
        
        return ans;     
        
    }
};