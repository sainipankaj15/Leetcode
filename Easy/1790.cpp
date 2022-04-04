class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        
        int count=0;
        char a,b,c,d;
        for(int i=0;i<s1.size();++i){
            if(s1[i]==s2[i])
            {
                s1.erase(s1.begin()+i);
                s2.erase(s2.begin()+i);
                i--;
                
            }
        }
        
        
      if(s1.size()==0 || (s1[0]==s2[1] && s1[1]==s2[0] && s1.size()==2))
        return 1;
        return 0;
        
    }
};