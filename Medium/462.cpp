class Solution {
public:
    int minMoves2(vector<int>& nums) {
        
        int ans=0;
        sort(nums.begin(),nums.end());
        int median = 0;
        if(nums.size()%2==1)
       median = nums[nums.size()/2];
        else
       median = (nums[nums.size()/2]+nums[(nums.size()/2)-1])/2;
        
        
        for(auto it: nums){
           ans+=abs(it-median);
        }
        
        return ans;
    }
};