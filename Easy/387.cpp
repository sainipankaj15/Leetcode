class Solution {
public:
    int firstUniqChar(string s) {
        int a[26] = {0};
        
        for(auto it : s)
        {
            a[it-'a']++;
        }
        
        for(int i=0;i<s.size();i++){
            if(a[s[i]-'a']==1)
                return i;
        }
        
        
        // otherwise there is no unique
        return -1;
    }
};