class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans="";
        
        int i=1;
        int subtract = pow(26,i);
        
        while(columnNumber>0){
            int modd = columnNumber%26;
            if(modd==0)
            {
                modd = 26;
            }
             columnNumber-=modd;
            modd+=64;
            ans+=modd;
           
            i++;
            // subtract = pow(26,i);
            columnNumber/=subtract;
            // subtract = pow(26,i);
   
             
        }
        
        reverse(ans.begin(),ans.end());
        
        return ans;
    }
};