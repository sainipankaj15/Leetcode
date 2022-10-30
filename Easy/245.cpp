class Solution {
public:
    int averageValue(vector<int>& nums) {
        int count=0;
        int sum=0;
        
        for(auto it : nums){
            if(it%3==0 && it%2==0)
            {
                sum+=it;
                count++;
            }
        }
        if(count==0)
            return 0;
        return sum/count;
    }
};