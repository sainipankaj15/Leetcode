class Solution {
public:
    int arraySign(vector<int>& nums) {
        
        
        int countminus=0;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0)
                countminus++;
            if(nums[i]==0)
                return 0;
        }
        
        
        if(countminus%2==1)
            return -1;
        
        return 1;
    }
};