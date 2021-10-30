class Solution {
public:
    string sortSentence(string s) {
        string ans="";
        
        string snake[10];
        int a[10]={0};
        string ppush="";
        for(int i=0;i<s.size();i++){
            if(s[i]>48 && s[i]<58){
            
                 snake[s[i]-'0'] = ppush;
                a[s[i]-'0'] = 1;
                ppush = "";
                i++;
            }
            else{
                // ppush.erase(ppush.rbegin());
                    ppush+=s[i];
               
            }
        }
        for(int i=1;i<10;i++){
            if(a[i]==1)
            {
                  ans+=snake[i];
            ans+=" ";
            }
        }
        ans.erase(ans.begin()+ans.size()-1);
        return ans;
    }
};