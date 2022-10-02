class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> m;
        
        for(auto it : magazine){
            m[it]++;
        }
        
        for(auto it : ransomNote){
            m[it]--;
            if(m[it]<0)
                return 0;
        }
        
        
        return 1;
    }
};