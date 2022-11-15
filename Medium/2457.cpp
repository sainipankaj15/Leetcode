// better explaination 
// https://leetcode.com/problems/minimum-addition-to-make-integer-beautiful/solutions/2758216/java-c-python-straight-forward-solution/
class Solution {
   
     int sum(long long int n){
         int ans = 0;

         while(n>0){
             ans+=n%10;
             n/=10;
         }

         return ans;
     }
public:
    long long makeIntegerBeautiful(long long n, int target) {
        
        long long int n1 = n;

        // we will remove one by one letter from right side until it's sum is less than target
      
      long long int base=1;

      while(sum(n)>target){
          n = n/10+1;
          base*=10;
      }

      // now n contain only those number which digits sum is less than/equal to target 
    // and base contaion how many zero it had 

    return n*base-n1;


    }
};