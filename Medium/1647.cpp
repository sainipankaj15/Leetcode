class Solution {
public:
    int minDeletions(string s) {
        vector<int> v(26);
        for(int i=0;i<s.size();i++){
            v[s[i]-'a']++;
        }
        
        
        sort(v.begin(),v.end());
        
        int ans=0;
        for(int i=24;i>=0;i--){
            
             if(v[i]==0){
               break;
            }
            if(v[i]>=v[i+1]){
                int pre = v[i];
                v[i] = max(0,v[i+1]-1);
                ans+=pre-v[i];
                
            }
          
        }
        
        return ans;
    }
};

//took help from this
//https://leetcode.com/problems/minimum-deletions-to-make-character-frequencies-unique/discuss/2207106/C%2B%2B-oror-Easy-Solution-oror-Full-Explanation-oror-Least-Space