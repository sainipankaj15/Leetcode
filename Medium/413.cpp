class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        
        int ans=0;
        int count=0;
        for(int i=2;i<nums.size();i++){
            if(nums[i]-nums[i-1]==nums[i-1]-nums[i-2]){

                count++; // first count ko increase karoo 
                ans+=count; // add kar doo isme wo pura subaaray mai jitne bhi wo attractive series h wo add ho gayi h 
              
            }
            else{
            
                count = 0; // we condition failed
            }
        }
        
     
        return ans;
        
    }
};