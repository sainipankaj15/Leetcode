class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        // sort(nums.begin(),nums.end());
        unordered_map<int,int> m;
        
        
        for (int i = 0; i < nums.size() ; i++)
    {
      m[nums[i]]++;
    }
        
     for (int i = 0; i < nums.size() ; i++)
    {
      if(m[nums[i]]==1)
          return nums[i];
    }
       
       return 0; // this line will never excuete but for complete funcion we have return this
    }
};