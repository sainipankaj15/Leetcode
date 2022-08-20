class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        
        if(nums.size()==1)
            return 1;
        
        int check = nums[nums.size()-1]-nums[0];
         
        if(check>=0)
        {
            vector<int> a = nums;
            sort(a.begin(),a.end());
            if(a==nums)
                return 1;
        }
        else{
            vector<int> a = nums;
            sort(a.begin(),a.end(),greater<int>());
            if(a==nums)
                return 1;
        }
        
        // otherwise
        return 0;
    }
};


// method 2
class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        
        if(nums.size()==1)
            return 1;
        
        bool decrease=false;
        bool increase=false;
        
       for(int i=1;i<nums.size();i++){
           if(nums[i]-nums[i-1]<0){
               decrease = true;
           }
             if(nums[i]-nums[i-1]>0){
               increase = true;
           }
       } 
        
        
        return !(increase && decrease);
    }
};