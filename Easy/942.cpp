class Solution {
public:
    vector<int> diStringMatch(string s) {
        
        vector<int> ans(s.size()+1);
     
        int p = s.size();
        
        for(int i=0;i<s.size();i++){
            if(s[i]=='D'){
                ans[i] = p;
                p--;
            }
        }
        
        p = 0;
        
          for(int i=0;i<s.size();i++){
            if(s[i]=='I'){
                ans[i] = p;
                p++;
            }
        }
        ans[s.size()] = p;
        
        return ans;
    }
    
};