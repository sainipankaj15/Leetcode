class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        unordered_map<int,int> m;
        
        
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        
        int ans=0,furequ=0;
        
        
        
        for(auto it:m){
            if(it.second>=furequ){
                ans = it.first;
                furequ = it.second;
            }
        }
        
        return ans;
    }
};


// below solution is better solution
// O(n) TC and O(1) space

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int ans=nums[0];
        
        int count=1;
        
        for(int i= 1;i<nums.size();i++){
            if(count==0){
                ans = nums[i];
                count++;
            }
            else if(ans==nums[i])
                count++;
            else
                count--;
        }
        
        
        
        return ans;
    }
};