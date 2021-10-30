class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size();i+=2){
            int j=nums[i];
            // j++;
            while(j--){
                ans.push_back(nums[i+1]);
            }
        }
        return ans;
    }
};