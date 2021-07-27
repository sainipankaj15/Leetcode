class Solution {
public:
    string removeKdigits(string num, int k) {
        
        while(k--){
            int nums= num.size();
            int a , b,i;
          if(nums>1){
                 for(i=0;i<nums;i++){
                 a = num[i];
                 b = num[i+1];
                 
                 if(a<=b){
                     
                 }
                 else{
                     num.erase(num.begin()+i);
                     break;
                 }
                     
             }
          }
            else{
                if(num[0]=='0'){
                    
                }
                else{
                    num[0] = '0';
                }
            }
            
        }
        
        
        while(1){
             int a = num.size();
        
        if(num[0]=='0' && a>1)
            num.erase(num.begin()+0);
            else
                break;
            
        }
       
        return num;
        
    }
};