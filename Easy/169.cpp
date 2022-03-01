class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        unordered_map<int,int> m;
        
        
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        
        int ans=0,furequ=0;
        
        
        
        for(auto it:m){
            if(it.second>=furequ){
                ans = it.first;
                furequ = it.second;
            }
        }
        
        return ans;
    }
};