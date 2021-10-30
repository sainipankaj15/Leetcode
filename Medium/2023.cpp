// this has O(n*n)  time complexity 
class Solution {
public:
    int numOfPairs(vector<string>& nums, string target) {
        int ans=0;
        string a="";
        string b="";
        
        for(int i=0;i<nums.size();i++){
            a = nums[i];
            
            for(int j=0;j<nums.size();j++){
                if(i!=j){
                    b = nums[j];
                    if(a+b==target)
                        ans++;
                }
            }
        }
        
        
        
        
        return ans;
    }
};


//