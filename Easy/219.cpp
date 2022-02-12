// this question of sliding window
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        
        if(nums.size()==1 || k==0)
            return false;
        
        
        // we will store numbers in map 
// key and value
// so if anykey has value greater than 1 it means this key come 2 times 
        map<int,int> m;
        // we can also use unordered_map
        int i=0,j=1;
        
       m[nums[i]]++;
        // took first element in map 
        
        while(j<nums.size()){
            
            m[nums[j]]++;
            
            if(m[nums[j]]>1)
                return true; // in any case if we found key has greater than 1 value then it is true
            if(j-i<k)
                j++;
            else if((j-i)<=k){
                
                m[nums[i]]--; // if somekey is going so we removed it from our map
                
                i++ ; j++; // here we slide the window
            }
            
           
        }
         
           return false; 
    }
};