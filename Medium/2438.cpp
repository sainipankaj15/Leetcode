class Solution {
public:
    vector<int> productQueries(int n, vector<vector<int>>& queries) {
        
        int count=0;
        
        vector<int> powerr;
        while(n>0){
            //number ko binary mai likha and jaha jaha 1 likha h wo power mai karke pusk kar rakha h 
            int checkpower = n%2;
            n = n/2;
            if(checkpower==1){
                int c = pow(2,count);
                powerr.push_back(c);
                
            }
            count++;
        }
        
        long long int mult = 1;
        vector<int> ans;
        for(auto it : queries){
            mult = 1;
            for(int i = it[0];i<=it[1];i++){
                mult*=powerr[i];
                mult = mult%1000000007;
            }
            ans.push_back(mult);
        }
        
        return ans;
        
        
    }
};