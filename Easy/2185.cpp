class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        
        int ans=0;
     
            
             for(int j=0;j<words.size();j++)
             {
                 ans++;
                  for(int i=0;i<pref.size();i++)
                if(pref[i]!=words[j][i]){
                    ans--;
                    break;
                }
             }
        
        
        return ans;
        
        
        
        
        
    }
};