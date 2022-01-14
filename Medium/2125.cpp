class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
    
        vector<int> neww;
        int add=0;
        for(int i=0;i<bank.size();i++){
            for(int j=0;j<bank[i].size();j++){
                if(bank[i][j]=='1')
                    add++;
            }
            neww.push_back(add);
            add=0;
        }
        
        for(int i=0;i<neww.size();i++){
            if(neww[i]==0)
            {
                 neww.erase(neww.begin()+i); i--;
            }
        }
        
        
        int ans=0;
        if(neww.size()>1)
        for(int i=0;i<(neww.size()-1);i++){
            ans+=neww[i]*neww[i+1];
        }
        return ans;
        
        
        
    }
};