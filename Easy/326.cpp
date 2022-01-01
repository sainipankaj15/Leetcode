class Solution {
public:
    bool isPowerOfThree(int n) {
           if(n<1)
            return false;
        else{
            if(n==1)
                return true;
            else{
                
                while(n>1){
                    if(n%3==1 || n%3==2)
                        return false;
                    n = n/3;
                    
                }
                return true;
            }
            
            
        }
    }
};