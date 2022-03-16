class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        
        
        vector<int> keyind;
           vector<int> ans;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]==key)
                keyind.push_back(i);
        }
        // for(int j=0;j<keyind.size();j++)
        //     cout<<keyind[j]<<" ";
        
           for(int i=0;i<nums.size();i++){
           for(int j=0;j<keyind.size();j++){
               if(abs(i-keyind[j])<=k){
                   // cout<<i<<" ";
                   ans.push_back(i);
                   break;
               }
           }
        }
        
        return ans;
    
        
    }
};