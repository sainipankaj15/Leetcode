class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        
        int ans=0;
        int j=0;
        if(ruleKey=="type")
            j = 0;
        else if(ruleKey=="color")
            j = 1;
        else if(ruleKey=="name")
            j = 2;
        // cout<<j<<endl;
        
        for(int i=0;i<items.size();i++){
            if(items[i][j]==ruleValue)
                ans++;
        }
        return ans;
        
    }
};