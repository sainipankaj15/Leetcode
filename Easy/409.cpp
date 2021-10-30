class Solution {
public:
    int longestPalindrome(string s) {
        int a[123]={0};
        
        for(int i=0;i<s.size();i++){
            a[s[i]]++;
        }
        int ans=0;
        for(int i=0;i<123;i++){
            if(a[i]>1)
            {
                ans+=a[i];
                if(a[i]%2==1)
                    ans--;
                
            }
        }
        
          for(int i=0;i<123;i++){
            if(a[i]%2==1)
            {
                   ans++;
                break;
            }
        }
       
        return ans;
    }
};