class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> a;
        int sum = nums[0];
        
        for(int i=0;i<(nums.size()-1);i++){
            a.push_back(sum);
            sum+=nums[i+1];
        }
        
         a.push_back(sum);
        return a;
    }
};



// Probelm link =  https://leetcode.com/problems/running-sum-of-1d-array/

// second more effiecnt way 
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
       
        int push=0;
        for(int i=0;i<nums.size();i++){
            push+=nums[i];
            nums[i] = push;
        }
        
         
        return nums;
    }
};

// third method more effiecnt above 2 mehtod
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
       

        for(int i=1;i<nums.size();i++){
          
            nums[i]+=nums[i-1];
        }
        
         
        return nums;
    }
};