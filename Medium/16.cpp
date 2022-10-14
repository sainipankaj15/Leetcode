// First fix the first element then two pointer approch 
// if sum > target then decrease from last 
// if sum <target  then increase from start 

class Solution
{
public:
    int threeSumClosest(vector<int> &nums, int target)
    {   
        sort(nums.begin(),nums.end());

        int i=0;

        // while(i<nums.size()-2){

        // }

        int diff = INT_MAX;
        int sum = 0;
        int ans = 0;
        for (int i = 0; i < nums.size() - 2; i++)
        {
           int j = i+1;
           int k = nums.size()-1;

           while(j<k){
               sum = nums[i]+nums[j]+nums[k];

               if(abs(sum-target)<diff)
               {
                   ans = sum;
                   diff = abs(sum-target);
               }
               if(sum<target)
               j++;
               else
               k--;
           }
        }

        return ans;
    }
};