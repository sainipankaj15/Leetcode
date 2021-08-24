class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int answ=0;
        
        
        for(int i=0;i<accounts.size();i++){
            for(int j=0;j<accounts[i].size();j++){
                answ = max(answ,accumulate(accounts[i].begin(),accounts[i].end(),0));
            }
        }
        return answ;
    }
};