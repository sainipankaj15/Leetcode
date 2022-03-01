class Solution {
public:
    int minSteps(string s, string t) {
        
        
        
        

        int ss[123]={0};
          int tt[123]={0};
        for(auto i =0;i<s.size();i++){
            ss[s[i]]++;
        }
        
         for(auto i =0;i<t.size();i++){
            tt[t[i]]++;
            
        }
        
        int ans=0;
         for(auto i =0;i<123;i++){
          ans+=max(ss[i],tt[i]) - min(ss[i],tt[i]);
            
        }
       
        
     
        
        return ans;
        
        
        
        
    }
};