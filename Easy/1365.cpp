class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> ans;
        int count=0;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                if(nums[j]<nums[i])
                    count++;
            }
            ans.push_back(count);
            count = 0;
        }
        
        return ans;
    }
};
// this solution is o(n*n)
// we can optimize this solution
// below solution is in O(n)
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> frequency(101);
        int count=0;
        for(int i=0;i<nums.size();i++){
            frequency[nums[i]]++;
            }
        int overall[101];
        overall[0] = 0;
        for(int i=1;i<=100;i++){
            frequency[i]+=frequency[i-1];
        }
        
        vector<int> ans;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0)
                ans.push_back(0);
            else
                ans.push_back(frequency[nums[i]-1]);
            
        }
        return ans;
    }
};