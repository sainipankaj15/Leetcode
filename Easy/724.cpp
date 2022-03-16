class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        
        
          if(nums.size()==1)
            return 0;
        else{
                    
            int right_sum=0;
            int left_sum=0;
            
            for(int i=0;i<nums.size();i++){
                right_sum+=nums[i];
            }
            
                         
              for(int i=0;i<nums.size();i++){
              
                  right_sum-=nums[i];
                  if(left_sum==right_sum)
                      return i;                 
                  left_sum+=nums[i];
            }
            
            
            
            
           // otherwise
            return -1;
        }
        
        
        
    
        
    }
};