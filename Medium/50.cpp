class Solution {
public:
    double myPow(double x, int n) {
        return pow(x,n);
    }
};



//method 2 = using recursion function 
// TC = O(logn)
// SC = O(n)

class Solution {
    
    double powerfun(double x, int n){
        if(n==0)
            return 1;
        else if(n%2==0)
            return powerfun(x*x,n/2);
        return x*powerfun(x*x,n/2);
    }
    
    
public:
    double myPow(double x, int n) {
        
        double ans;
        
        ans = powerfun(x,abs(n));
        
        if(n<0)
            ans = 1/ans;
                
        return ans;
    }
};









//Method 3
// TC = O(logn)
// SC = O(1)
class Solution {
    
    
public:
    double myPow(double x, int n) {
        
        double ans=1.0;
        
        long long count = abs(n);
        
        while(count>0){
            if(count%2==1){
                // 2^5 = 2(2^4)
                ans = ans*x;
                count--;
            }
            else{
                // 2^8 = (2^2)^4
                x = x*x;
                count/=2;
            }
        }
                
        if(n<0)
            ans = 1/ans;
                
        return ans;
    }
};