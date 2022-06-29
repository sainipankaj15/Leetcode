class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        int low=0;
        int high = nums.size()-1;
        
        
        // low means left element
        // high means right element
        
    
        while(low<=high){
            

            
            int mid = low + (high-low)/2;
       
            if(nums[mid]<target){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
            
         
        }
        
        
        
     
        return low;
        
    }
};



// second method
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int ans = lower_bound(nums.begin(),nums.end(),target)-nums.begin();
      return ans;
    }
};

// defination of lower_bound
//lower_bound fucntion returns an iterator pointing to the first element which is not less than x