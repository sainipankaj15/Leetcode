class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans=0;
        int mul=0;
        
        
        mul = nums[nums.size()-1]*nums[nums.size()-2];
        
        ans = mul;
        mul = nums[0]*nums[1];
        ans-=mul;
        return ans;
    }
};

//  here ek approch aur h wo O(n) time but i m not write you know i m lazy

// Yaha par ek approch aur ho sakti h 
// O(n) mai h wo 

// Ki hum first min second min first max and second max nikal le 
// loop chala kr 

// yeh apporch aachi h 
// https://leetcode.com/problems/maximum-product-difference-between-two-pairs/discuss/1299652/Easy-C%2B%2B-O(N)-solution-oror-commented