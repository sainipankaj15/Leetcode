class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        
        int maxa = 0;
        int pankaj=0;
        int ans=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==key)
            {
                for(int j=0;j<nums.size();j++){
                    if(nums[j]==nums[i+1] && j!=i)
                        ans++;
                }
                if(ans>maxa)
                {
                     maxa = max(maxa,ans);
                    pankaj = nums[i+1];
                }
                ans=0;
            }
        }
        
        return pankaj;
        
    }
};