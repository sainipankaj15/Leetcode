class Solution {
public:
    string reverseStr(string s, int k) {
        
        // if(s.size()<k)
        //     return s;
        int p2=0;
        int p1=0;
        for(int i=0;i<s.size();i++){
           
            p1 = i;
            p2 = p1+k;
            if(p2>s.size())
                p2 = s.size();
            // if(p2==s.size())
            // {
            //     // cout<<"hi\n";
            //      reverse(s.begin(),s.end());
            // }
            // else
            // {
                // cout<<"ok\n";
                 reverse(s.begin()+p1,s.begin()+p2);
            // }
           i+=2*k;
            // if(i+1==s.size())
            //     return s;
            i--;
                // i++;
        }
        
        return s;
        
    }
};

// here main fact is if second pointer exceed the size so we will take back it on the end poistion