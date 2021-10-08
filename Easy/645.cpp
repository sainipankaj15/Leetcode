class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int maxsize = nums.size();
        vector<int> ans;
        
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==nums[i+1])
            {
                 ans.push_back(nums[i]);
                  // ans.push_back(i+1);
                nums.erase(nums.begin()+i);
                i--;
            
            }
            // if(nums[i]==nums[i+1]);
            // ans.push_back(nums[i]);
            
        }
        array<int,10001> a;
        fill(a.begin(),a.end(),-1);
        
        for(int i=0;i<nums.size();i++)
        {
            a[nums[i]]++;
        }
        
        for(int i=1;i<=maxsize;i++){
            if(a[i]==-1)
                ans.push_back(i);
        }
        
        
        // sort(ans.begin(),ans.end());
        
        // for(int i=0;i<(ans.size()-1);i++)
        // {
        //     if(ans[i]==ans[i+1])
        //         ans.erase(ans.begin()+i);
        // }
        return ans;
    }
};