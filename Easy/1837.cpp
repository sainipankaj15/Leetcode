class Solution {
public:
    int sumBase(int n, int k) {
        
        vector<int> digit;
        
        
        while(n>0){
            if(n<k){
              digit.push_back(n);  
                break;
            }
            digit.push_back(n%k);
            n = n/k;
            
             // n = n-digit[digit.size()-1]*k;
        }
        
        int ans = accumulate(digit.begin(),digit.end(),0);
        return ans;
    }
};