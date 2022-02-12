class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
     
        
        
        // if(k==0)
        //     return 0;
        sort(nums.begin(),nums.end());
        
        
        unordered_map<int,int> m;        
        unordered_map<int,int> ans;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        
        for(int i=0;i<nums.size();i++){
            if(m.find(k+nums[i])!=m.end()){
                if(k!=0)
                ans[nums[i]] = k+nums[i];
                if(k==0){
                    if(m[nums[i]]>1){
                        ans[nums[i]] = k+nums[i];
                        // m[nums[i]]-=2;
                    }
                    
                }
            }
            
        }
           
        return ans.size();
    }
};