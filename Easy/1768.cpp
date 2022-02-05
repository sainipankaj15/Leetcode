class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        
        
        int minisize = min(word1.size(),word2.size());
          
        string ans;
        
        for(int i=0;i<minisize;i++){
            ans+=word1[i];
            ans+=word2[i];
        }
        
        if(word2.size() == word1.size()){
            return ans;
        }
        if(word1.size()<word2.size()){
            
            for(int i=minisize;i<word2.size();i++){
                ans+=word2[i];
            }
            
        }
        else{
            
            
             for(int i=minisize;i<word1.size();i++){
                ans+=word1[i];
            }
            
        }
    
    return ans;
    }
};