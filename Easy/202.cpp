class Solution {
public:
    bool isHappy(int n) {
        unordered_map<int,int> m;
        
        // like if 1 comes second time then we will break it
        m[1]++;
        while(n!=1){
            
        
            if(m[n]==0)
                m[n]++;
            else
                return false;
            
            int sum=0;
            
            while(n>0)
            {
                sum = sum+pow(n%10,2);
                n = n/10;
            }
            
            n = sum;
        }
        
        
        
        //if we get zero then return true
        return 1;
    }
};