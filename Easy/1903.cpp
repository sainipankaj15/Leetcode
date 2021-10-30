class Solution {
public:
    string largestOddNumber(string num) {
        reverse(num.begin(),num.end());
        for(int i=0;i<num.size();i++){
            int a ;
            a = num[i];
            
            a = a-48;
            if(a%2==1)
                break;
            else
            {
                num.erase(num.begin());
                i--;
            }
            
        }
          reverse(num.begin(),num.end());
        return num;
    }
};