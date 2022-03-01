class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
         
         int tankfull = capacity;
        int ans=0;
        for(int i=0;i<plants.size();++i){
            if(plants[i]<=capacity){
                ans++;
                capacity-=plants[i];
            }
            else{
                capacity = tankfull;
                
                
                // rivere tak jaane mai steps 
                ans+=i;
        
                
                
                
                // river se wapis aane mai steps
                ans+=i;
                
                //i-- bcoz we have to give water those plant who failed first time 
                // overall jis wazah else mai aaye the if wali condtion fail huyi thi ushe hi dubra bhi tho paani dena h 
                i--;
            }
        }
        
        return ans;
        
        
    }
};