class Solution {
public:
    bool isIdealPermutation(vector<int>& nums) {
        // idea is that ki every number bas aage piche rahana chaaiye warna global wale jaayda ho jaayage aur local wale kam 
        
        for(int i=0;i<nums.size();i++){
            if(abs(nums[i]-i)>1)
                return 0;
        }
        
        
        // otherwise 
        return 1;
    }
};