class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        multiset<int> p;
        
        for(int i=0;i<nums.size();i++)
        {
            p.insert(nums[i]);
            
        }
        int j=0;
        for(int i=1;i<nums.size();i++){
            if(p.count(i)>1)
            {
            j = i;
                break;
            }
        }
        return j;
    }
};