class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        
        
        int ans=0;
        int count=0;
        
        for(int i=0;i<words.size();i++){
            
            for(int j=0;j<words[i].size();j++)
            {
                for(int k=0;k<allowed.size();k++){
                    if(words[i][j]==allowed[k])
                    count++;
                }
            }
            
            if(count==words[i].size())
                ans++;
            count = 0;
        }
        
        
        
        return ans;
    }
};