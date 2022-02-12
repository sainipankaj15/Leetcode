class Solution {
public:
    int addDigits(int num) {
        
         int sum=0;
        
        int n=num;
        
        while(n>9){
            
           sum = 0 ;
            
            while(n>0)
            {
                sum+=n%10; n/=10;
                
            }
            
            n = sum;
            
        }
        return n;
    }
};