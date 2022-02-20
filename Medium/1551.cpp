class Solution {
public:
    int minOperations(int n) {
        
        
        // first n odd numbers sum would be n*n
        // let me example
        // n = 3     1 3 5 sum would be 3*3 = 9
        // n= 5  1 3 5 7 9 sum would be  5*5 = 25
        // n = 7      1 3 5 7 9 11 13 sum would be 7*7 = 49
        
        
        // now see the logic
//        if all numbers are equal then what would be the number
        // number would be = totalsum/arraysize = givennumber
        
        // and how many opeation 
        // hum ushe number wale se choote number walo ko uske barbar laana h that;s all
        
        
          int i=1;
        int ans=0;
        while(i<n){
            ans+=n - i;

            i+=2;
        }
        
        return ans;
        
    }
};