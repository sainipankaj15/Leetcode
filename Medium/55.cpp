class Solution {
public:
    bool canJump(vector<int>& nums) {
        int reachable = 0;
        
        for(int i=0;i<nums.size();++i){
            if(i>reachable){
                // this case happens when u stuck on same index which have value zero 
                // means u are not going forward
                return 0;
            }
            else{
                reachable = max(reachable, i+nums[i]);
            }
        }
        
        //if loops executed successfully then return 1
        return 1;
    }
};