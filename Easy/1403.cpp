class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        
        int sum=0;
        sum = accumulate(nums.begin(),nums.end(),0);
        sort(nums.begin(),nums.end());
        int subseqsum=0;
        vector<int> ans;
        for(int i=nums.size()-1;i>=0;i--){
            subseqsum+=nums[i];
            sum = sum-nums[i];
            ans.push_back(nums[i]);
            if(subseqsum>sum)
                break;
        }
        
        
        return ans;
    }
};