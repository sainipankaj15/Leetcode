class Solution {
public:
    
 int reverse(int val)
{
int ans = 0;

 while( val > 0)
 {
     ans  = 10*ans + val%10;
     val     /= 10;
 }

 return ans;
}
    
    bool sumOfNumberAndReverse(int num) {
        
        for(int i=0;i<=num;i++){
            int b = reverse(i);
            if(i+b==num)
                return 1;
        }
        
        return 0;
    }
};