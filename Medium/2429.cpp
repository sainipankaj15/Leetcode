class Solution {
public:
    int minimizeXor(int num1, int num2) {
        bitset<30> b1(num1);
        bitset<30> b2(num2);
        
        // cout<<b1<<" "<<b2;
        
        int count1 = b1.count();
        int count2 = b2.count();
        
        
        if(count1==count2)
            return num1;
        else if(count1<count2){
            int gap = count2-count1;
            int k=1;
            while(gap){
                if (num1 & (1 << (k - 1)))
                {
                    
                }
               else
               {
                    // cout << "NOT SET";
                   num1 = num1 | (1 << (k - 1));
                   gap--;
               }
                k++;
            }
            return num1;
        }
        else{
            int gap = count1-count2;
            int k=1;
            
             while(gap){
                if (num1 & (1 << (k - 1)))
                {
                    num1 = num1 & ~(1 << (k - 1));
                    gap--;
                }
               else
               {
                    // cout << "NOT SET";
                   // num1 = num1 | (1 << (k - 1));
                   
               }
                k++;
            }
            return num1;
        }
            
            
            
            
            
       
        return 0;
    }
};