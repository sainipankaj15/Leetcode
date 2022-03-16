class Solution {
public:
    vector<int> countBits(int n) {
        
        vector<int> ans;
        
        for(int i=0;i<=n;i++){
            ans.push_back(__builtin_popcount(i));
        }
        
        //using in bulit funciton
        // if x is number in 10th base and if we want ki binary mai change karne k baad usme kitna 1 aayge then we will use 
        //   __builtin_popcount(x) 
        
        // for more reference read this article 
        // https://www.geeksforgeeks.org/builtin-functions-gcc-compiler/
        
        return ans; 
         
    }
};

