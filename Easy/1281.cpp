class Solution {
public:
    int subtractProductAndSum(int n) {
        
        int ans=0;
        int product=1, sum=0;
        int digit;
        while(n>0){
            digit = n%10;
            product*=digit;
            sum+=digit;
            n = n/10;
        }
        ans = product - sum;
        return ans;
        
    }
};