

class Solution {
public:
    int getMaximumGenerated(int n) {
        
        int ans=0;
        int a[101];
        a[0] = 0 ; a[1] = 1 ;
        ans=1;
        
        for(int i=2;i<=n;i++){
            if(i%2==0){
                a[i] = a[i/2];
                ans = max(ans,a[i]);
            }
            else
            {
                 a[i] = a[(i-1)/2]+a[((i-1)/2)+1];
            ans = max(ans,a[i]);
            }
        }
        // sort(a,a+n);
        if(n==0)
            return 0;
        return ans;
     }
};