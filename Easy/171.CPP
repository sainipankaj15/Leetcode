class Solution {
public:
    int titleToNumber(string columnTitle) {
        
        
        int ans=0;
        
        
        
        reverse(columnTitle.begin(),columnTitle.end()); //FIRST REVERSE THE STRING
        
        for(int i=0;i<columnTitle.size();i++){
            int a = pow(26,i); // POWER MAI HO RAHA H 26 KI MAI 
            int order = columnTitle[i]-64; // KONSA LETTER K APNE PASS
            a = a*order; // MULITPLE 
            ans+=a;// AADING
        }
        
        
        return ans;
    }
};