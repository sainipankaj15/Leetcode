class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int count = 0;
        
		//Now run a loop if number is not equal to zero then replace it with nums[i] and increase count.
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)
            nums[count++] = nums[i];
        }
        // now till now all non zero numbers has come and we have count how many numbers has came in nums
		// remaining till num.size() fill zero 
        while(count<nums.size())
         nums[count++]=0;
        
        
    }
};