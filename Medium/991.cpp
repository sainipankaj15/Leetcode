class Solution {
public:
    int brokenCalc(int startValue, int target) {
        
        
        int ans=0;
        // we will think from opposite side 
        // means hum  target ko startValue k equal laayge
        // given quesstion mai bol raha h *2 then it would be change in even
        // if subract minus then it would be change in odd
        
        // then what we will do if yadi taget odd h tho plus kargee
        // if target is even then divide by 2 kargaa
        
        while(target!=startValue){
            if(target%2==0 && target>startValue){
                ans++;
                target/=2;
            }
            else{
                ans++;
                target++;
            }
        }
        
        
        
        return ans;
    }
    
};