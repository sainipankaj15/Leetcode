class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
      
        //firstly fix both max
        int firstnum = INT_MAX;
        int secondnum = INT_MAX;
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<firstnum){
                firstnum = nums[i]; //get first number in our sequence
            }
            else if(nums[i]>firstnum && nums[i]<secondnum){
                secondnum = nums[i];
                // got second number
            }
            else if(nums[i]>secondnum)
            {
                // got third number and our answer is YES now
                return 1;
        
            }
        }
        
        
        // if we dont find it then our answer is false
         return 0;
    }
};