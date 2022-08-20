class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int a[101]={0};
        
        for(auto it : nums){
            a[it]++;
        }
        
        int count=0;
        for(int i = 1 ;i<101;i++){
            if(a[i]!=0)
                count++;
        }
        
        
        return count;
    }
};