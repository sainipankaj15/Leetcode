class Solution {
public:
    int destroyTargets(vector<int>& nums, int space) {
      map<int,int> m;
        sort(nums.begin(),nums.end());
        for(auto it : nums){
            m[it%space]++;
        }

        int maxFrequency=-1;
        for(auto it : m){
            if(it.second>maxFrequency){
                maxFrequency = it.second;
            }
        }

        int ans=INT_MAX;

        for(auto it : nums){
           if(m[it%space]==maxFrequency)
            ans = min(ans,it);
        }

        return ans;

    }
};