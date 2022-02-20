class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        
        
        
        int sum=0,ans=0;
        
        for(int i=0;i<sentences.size();i++){
            sum = 0;
            for(int j=0;j<sentences[i].size();j++){
                if(sentences[i][j]==' '){
                    sum++;
                }
            }
            ans = max(sum,ans);
        }
        
        
        // we just count the space but words number are just one more
        // so
        ans++;
        return ans;
        
        
    }
};


// below is more powerful solution bcose we here we use stl function
// count function ::tho uper wale code mai jo kaam hum loop chala kar rakh the wo yeh fucntion kam time mai sidha hai kar deta h 

class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        
        
        
        int sum=0,ans=0;
        
        for(int i=0;i<sentences.size();i++){
          sum = count(sentences[i].begin(),sentences[i].end(),' ');
            ans = max(sum,ans);
        }
        
        
        // we just count the space but words number are just one more
        // so
        ans++;
        return ans;
        
        
    }
};