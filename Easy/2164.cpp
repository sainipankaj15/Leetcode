class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        
        vector<int> even;
        vector<int> odd;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            if(i%2==0){
                even.push_back(nums[i]);
            }
            else{
                odd.push_back(nums[i]);
            }
        }
        
        sort(even.begin(),even.end());
        sort(odd.begin(),odd.end(),greater<int>());
        
       
        
         for(int i=0;i<odd.size();i++){
           ans.push_back(even[i]);
             ans.push_back(odd[i]);
        }
        
        if(nums.size()%2==1)
            ans.push_back(even[odd.size()]);
        
        
        return ans;
    }
};