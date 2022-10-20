class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        int n = nums.size();
        for(int i=0;i<n;i++){
            int a = nums[i];
            string s = to_string(a);
            reverse(s.begin(),s.end());
            a = stoi(s);
            nums.push_back(a);
        }
        
        set<int> s;
        for(auto it : nums){
            s.insert(it);
        }
        
        return s.size();
    }
};