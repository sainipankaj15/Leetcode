class Solution {
public:
    int minimumSum(int num) {
        
        int a[4];
        a[0] = num%10;
        num = num/10;
        
          a[1] = num%10;
        num = num/10;
          a[2] = num%10;
        num = num/10;
          a[3] = num%10;
        num = num/10;
        
        sort(a,a+4);
        int sum=0;
        sum+=a[0];
        sum+=a[1];
        sum = sum*10;
        sum+=a[2];
        sum+=a[3];
        return sum;
        
    }
};