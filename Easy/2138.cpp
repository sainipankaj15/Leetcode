class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        
        int howmanyneed = s.size()%k; // how many extra characters
        
        if(howmanyneed>0)
        howmanyneed = k - howmanyneed;
        
        
        // adding x to compltee loop
        while(howmanyneed--){
            s+=fill;
        }
        
        
        vector<string> ans;
        int j=0;
        string news="";
        for(int i=0;i<s.size();i++)
        {
            news+=s[i];
            if(i%k==k-1){
                ans.push_back(news);
                news = "";
            }
                
        }
        
        return ans;
        
    }
};