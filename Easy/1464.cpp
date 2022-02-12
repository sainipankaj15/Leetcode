class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        priority_queue<int,vector<int>,greater<int>> p;
        
        p.push(nums[0]);
         p.push(nums[1]);
        for(int i=2;i<nums.size();i++)
        {
            // p.push(nums[i]);
            if(p.top()<=nums[i]){
                p.pop();
                p.push(nums[i]);
            }
        }
        
         int a = p.top();
        p.pop();
        // int b = p.top();
        // a--; b--;
        // sort(nums.begin(),nums.end());
        return (a-1)*(p.top()-1);
    }
};



// second method
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        priority_queue<int,vector<int>,greater<int>> p;
        
        p.push(nums[0]);
         p.push(nums[1]);
        for(int i=2;i<nums.size();i++)
        {
            // p.push(nums[i]);
            if(p.top()<=nums[i]){
                p.pop();
                p.push(nums[i]);
            }
        }
        
         int a = p.top();
        p.pop();
        int b = p.top();
        a--; b--;
        // sort(nums.begin(),nums.end());
        return a*b;
    }
};



// third model
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        priority_queue<int> p;
        for(int i=0;i<nums.size();i++)
        {
            p.push(nums[i]);
        }
        
         int a = p.top();
        p.pop();
        int b = p.top();
        a--; b--;
        // sort(nums.begin(),nums.end());
        return a*b;
    }
};



// fourth model
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        return (nums[nums.size()-1]-1)*(nums[nums.size()-2]-1);
    }
};
