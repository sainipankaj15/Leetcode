class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        next_permutation(begin(nums),end(nums));
        // next_permutation(nums.begin(),nums.end());
    }
};


// method 2
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
      
        int left=-1,right=-1,i;
        
        int size = nums.size();
        
        for(i =size-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                left = i;
                break ;
            }
        }
        
        // but what if 5 4 3 2 1 it means there is no postion where nums[i]<nums[i+1]
        // so we will just reverse this array bcoz it is last postion 
        
        if(left==-1){
            reverse(nums.begin(),nums.end());
            
        }
        else{
            
            for(i=size-1;i>left;i--){
                if(nums[i]>nums[left]){
                    right  = i;
                    break ;
                }
            }
            
            // swap the values
            swap(nums[left],nums[right]);
            
            reverse(nums.begin()+left+1,nums.end());
            // reverse TC O(N)
            
        }
    }
};