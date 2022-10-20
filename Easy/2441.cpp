class Solution {
public:
    int findMaxK(vector<int>& nums) {
   sort(nums.begin(),nums.end());
        
        
        for(int i=nums.size()-1;i>=0;i--){
            for(int j=0;j<i;j++){
                if(nums[i]==-1*nums[j])
                    return nums[i];
            }
        }
        
        return -1;
    }
};