class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        
        int n = nums.size();
        nums.insert(nums.end(), nums.begin(), nums.end());
        
        stack<int> s;
        vector<int> ans(n,-1);

        for(int i=0;i<2*n;i++){
      
            while(s.size() && nums[i]>nums[s.top()]){

                if(s.top() >= nums.size()) //index should not exceed n
                {
                    s.top() = s.top() - nums.size();
                }

                ans[s.top()%n] = nums[i];
                s.pop();
            }

            s.push(i%n);
        }

        return ans;
    }
};