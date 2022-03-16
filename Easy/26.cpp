class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int remove=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                nums.erase(nums.begin()+i);
                i--;
                remove++;
                
            }
        
        }
               
        return nums.size();
    }
};


// second solution
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int remove=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                // nums.erase(nums.begin()+i);
                nums[i] = 101;
                i--;
                remove++;
                
            }
        
        }
        sort(nums.begin(),nums.end());
               
        return nums.size()-remove;
    }
};