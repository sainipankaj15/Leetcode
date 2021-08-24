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