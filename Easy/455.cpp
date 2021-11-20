class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        
        sort(g.begin(),g.end());        
             sort(s.begin(),s.end());   
        
        int ans=0;
        
        for(int i=0;i<g.size();i++){
            
            for(int j=0;j<s.size();j++){
                if(s[j]>=g[i]){
                    ans++;
                    s.erase(s.begin()+j);
                    g.erase(g.begin()+i);
                    i--;
                    break;
                }
            }
        }
        
        return ans;
    }
};

// first code is O(n*n)
// Second code is O(n*log(n))


class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        
        sort(g.begin(),g.end());        
             sort(s.begin(),s.end());   
        
        int ans=0;
        
//         for(int i=0;i<g.size();i++){
            
//             for(int j=0;j<s.size();j++){
//                 if(s[j]>=g[i]){
//                     ans++;
//                     s.erase(s.begin()+j);
//                     g.erase(g.begin()+i);
//                     i--;
//                     break;
//                 }
//             }
//         }
        
        
        int i=0,j=0;
        
        while(i<g.size() && j<s.size()){
            if(g[i]<=s[j]){
                i++;
                j++;
                ans++;
            }
            else{
                j++;
            }
        }
        
        
        
        
        return ans;
    }
};