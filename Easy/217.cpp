class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> m;
        
        
        for(auto it : nums){
            m[it]++;
            if(m[it]>1)
                return true;
        }
        
        
        
        return false;
    }
};



// second solution
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;++i){
            if(nums[i]==nums[i+1])
                return true;
        }
        return false;
    }
};