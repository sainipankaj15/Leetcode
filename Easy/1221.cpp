class Solution {
public:
    int balancedStringSplit(string s) {
        int ans=0;
        int l=0,r=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='L')
                l++;
            if(s[i]=='R')
                r++;
            if(l==r){
                l = 0;
                r = 0;
                ans++;
                
            }
        }
        
        
        return ans;
    }
};