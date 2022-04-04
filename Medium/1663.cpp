class Solution {
public:
    string getSmallestString(int n, int k) {
        
        
        int a[n];
        
        for(int i=0;i<n;i++){
            a[i] = 1;
            k--;
        }
        
        for(int i=0;i<n;i++){
            if(k>24){
                a[i]+=25;
                k-=25;
            }
            else{
                a[i]+=k;
                break;
            }
        }
        
        string ans="";
        
        for(int i=0;i<n;i++){
            int add = a[i]+96;
            ans+=add;
        }
        
        reverse(ans.begin(),ans.end());
        
        return ans;
        
    }
};



// second method 
class Solution {
public:
    string getSmallestString(int n, int k) { 
        
        string ans="";
        
        for(int i=0;i<n;i++){
            ans+='a';
            k--;
        }
        
        
         for(int i=n-1;i>=0;i--){
            if(k>24){
                
                ans[i] = 26+96;
                k-=25;
            }
            else{
                k++;
                ans[i] = k+96;
                break;
            }
        }
        
        
        return ans;
        
    }
};