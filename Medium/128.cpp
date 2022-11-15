// method 1 
// TC = O(N*logN)
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)
        return 0;

        sort(nums.begin(),nums.end());
        
        set<int> s;

        for(auto it : nums)
        s.insert(it);

        nums.clear();

        for(auto it : s)
        nums.push_back(it);
        
        int ans = 1;
        int count=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]+1){
                count++;
            }
            else{
                ans = max(ans,count);
                count = 1;
            }
        }

        // for last element 
        ans = max(ans,count);
        return ans;
    }
};


// method 2
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)
        return 0;

        set<int> s;

        for(auto it : nums)
        s.insert(it);

        int ans = 1; // ans shows longest streak 
        int count=0;
        for(auto it : s){
            if(!s.count(it-1)){
                int num = it;
                count = 0; // as we will start with the number so in the loop it will be first
                while(s.count(num)){
                    count++;
                    num++;
                }
                ans = max(ans,count);
            }
        }

        return ans;
    }
};