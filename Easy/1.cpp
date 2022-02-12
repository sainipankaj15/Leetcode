class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
     vector<int> v;
        int a=0;
        for(int i=0;i<(nums.size()-1);i++){
            for(int j=i+1;j<nums.size();j++){
                if((nums[i]+nums[j])==target){
                    a++;
                    v.push_back(i);
                    v.push_back(j);
                    break;
                }
                
            }
            if(a>0)
                    break;
        }
        return v;
    }
};
// above solution is using brute force method.
// this is using hash table method.

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
     vector<int> ans;
        
        unordered_map<int,int> m;
        
        for(int i=0;i<nums.size();i++)
        {
            if(m.find(target-nums[i])!=m.end()){
                return {i,m[target-nums[i]]};
            }
            m[nums[i]] = i; // m.insert({nums[i],i})
        }
        
        
        return { };
    }
};