class Solution {
public:
    char findTheDifference(string s, string t) {
        
        
         
        for (int i = 0; i < s.size(); i++)
    {
       auto it = t.find(s[i]);

    t.erase(t.begin()+it);
    }
        
        char ans= t[0];
        return ans;
        
        
    }
};