class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        bool ans=0;
        string new1="";
        string new2="";
        for(int i=0;i<word1.size();i++){
            new1+=word1[i];
        }
             for(int i=0;i<word2.size();i++){
            new2+=word2[i];
        }
        if(new1==new2)
            ans = 1;
        return ans;
    }
};