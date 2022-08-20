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

// second method order of N
class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {

        for (int i = digits.size() - 1; i >= 0; i--)
        {
            if (digits[i] == 9)
            {
                digits[i] = 0;
            }
            else
            {
                digits[i]++;
                return digits;
                // tho abhi tak return ho jaana chaaiye
            }
        }

        // but yadi abhi tak return nahi hua h means 999.. isha wali series tha
        // let take an example 99 tha
        // then abe tak 00 ban gaya ho gaya so we have to add one in the beginning
        // so
        digits[0] = 1;
        digits.push_back(0);
        // now it is 100
        return digits;
    }
};