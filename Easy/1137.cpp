
int tribonaccii(int n){
      // if(n==0)
      //       return 0;
      //   else if(n==1 || n==2)
      //       return 1;
      //   else
      //       return tribonaccii(n-1)+tribonaccii(n-2)+tribonaccii(n-3);
    int a[38];
    a[0] = 0;
    a[1] = 1;
    a[2] = a[1];
    
    for(int i=3;i<=37;i++){
        a[i] = a[i-1]+a[i-2]+a[i-3];
    }
    return a[n];
    
    
}
       





class Solution {
public:
    int tribonacci(int n) {
        
       return tribonaccii(n);
    }
};