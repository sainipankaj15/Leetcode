class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        
        for(int i = 0 ;i<nums.size();i++){
            if(i!=nums[i]){
                return i;
            }
        }
        
        
        return nums.size();
    }
};

// method 2

class Solution {
public:
    int missingNumber(vector<int>& nums) {
      
        // sum kar loo
        
        int size = nums.size();
        long long int sum1 = (size*(size+1))/2;
        
        long long int sum = accumulate(nums.begin(),nums.end(),0);
        return sum1 - sum;
    }
};


// Using XOR
class Solution {
public:
    int missingNumber(vector<int>& nums) {
      
        // Same cheez ka xor karo tho wo zero ho jaata h 
        // zeor ka kis k saath bhi xor karo tho wahi number aa jaata h 
        // order matter nahi karta h xor mai 
        
        
        
        
        // firstly hum kya kargee ki given array mai sabhi number ka xor le lege
        // then resulted xor ka 0 to n k saath xor le lege
        // so jo 2 baar hoga means given array mai bhi hoga and xor mai bhi hoga wo cancel out ho jayaga 
        
        // aur last mai bas wahi baach jaayag jo ek baar h means humara missing number
        
       int ans = 0;
        
        for(auto it : nums){
            ans = ans^it;
        }
        
        for(int i=0;i<=nums.size();i++){
            ans = ans^i;
        }
        
        return ans;
    }
};