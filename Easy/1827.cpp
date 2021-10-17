class Solution {
public:
    int minOperations(vector<int>& nums) {
        vector<int> s;
        s = nums;
        if(nums.size()==1)
            return 0;
        else{
            int ans=0;
            for(int i=0;i<(nums.size()-1);i++){
                if(s[i+1]<=s[i]){
                    ans+=s[i]+1-s[i+1];
                    s[i+1] = s[i]+1;
                }
                
            }
            
            
            return ans;
        }
    }
};