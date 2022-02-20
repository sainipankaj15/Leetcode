class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        
        long long int k=0;
        
        k = num-3;
        if(k%3==0){
            k = k/3;
            return {k,k+1,k+2};
        }
        
        
        return { };
        
    }
};