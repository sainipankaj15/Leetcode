class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<1)
            return false;
        else{
            if(n==1)
                return true;
            else{
                
                while(n>1){
                    if(n%2==1)
                        return false;
                    n = n/2;
                    
                }
                return true;
            }
            
            
        }
    }
};
//first method via loop

// second method viva bit property 
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<1)
            return false;
        else{
            if(n==1)
                return true;
            else{
                
                int m = n-1;
                bool b = (n&m);
                
                if(b==0)
                    return true;
                else
                    return false;
                
               // return ==0;
            
            
        }
    }
        return true;
    }
};