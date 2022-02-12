class Solution {
public:
    long long int reverse(long long int x) {
        int signcheck=0;
        //checking it is +ve or -ve
        if(x<0)
        {
            signcheck++;
            x = -1*x;
        }
        
        
        
        long long int ans=0;
        
        while(x>0){
          
            if(ans*10 > INT_MAX) //to avoid signed integer overflow
                return 0;
              ans =  x%10+ans*10;
            x/=10;
        }
        
        if(signcheck==1)
            return (-1)*(ans);
        return ans;
        
    }
};