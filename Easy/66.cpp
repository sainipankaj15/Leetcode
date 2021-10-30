class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        reverse(digits.begin(),digits.end());
        
        digits[0]++;
        int remainder = 0;
        for(int i=0;i<digits.size();i++){
            if(digits[i]<10){
                digits[i]+=remainder;
                remainder = 0;
            }
            if(digits[i]>9){
                digits[i]-=10;
                remainder = 1;
            }
        }
        if(remainder!=0){
            digits.push_back(1);
        }
        
         reverse(digits.begin(),digits.end());
        return digits;
    }
};