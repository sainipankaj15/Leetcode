// this soultion is without using moudlao operator
// otherwise one short and simple method is 
// run looop 1 to n and use moudlap opertor for knowing the of coffecient of 15
// this is another method


class Solution {
public:
    vector<string> fizzBuzz(int n) {
        
        vector<string> resulttt;
        
        string s = "";
        int fiz=0,buz=0;
        
        for(int i=1;i<=n;i++){
            fiz++;
            buz++;
            if(fiz==3 && buz!=5)
            {
                  s+="Fizz";
                fiz=0;
            }
            else if(fiz!=3 && buz==5)
            {
                  s+="Buzz";
                buz = 0;
            }
            else if(fiz==3 && buz==5)
            {
                 s+="FizzBuzz";
                 fiz=0; buz = 0;
            }
            else{
                s+=to_string(i);
            }
                
            resulttt.push_back(s);
            s = "";
        }
        return resulttt;
    }
};