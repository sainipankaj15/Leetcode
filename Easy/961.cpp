class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        
        int n = nums.size()/2;
        
        
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        
        
        for(auto it : m){
            if(it.second==n){
                return it.first;
                
            }
        }
        
        
        
        return 0; // this line is useless we will never come till this line
    }
};


// below code is too faster

// logic is 
// there are only a single item which is more than 1 time in the array
// remaining are 1 times only
class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        
        int n = nums.size()/2;
        
        
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
            if(m[nums[i]]==2){
                return nums[i];
            }
        }
        
        

        
        
        
        return 0; // this line is useless we will never come till this line
    }
};