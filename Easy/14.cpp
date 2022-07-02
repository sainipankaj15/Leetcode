  bool comp(string s1,string s2){
        if(s1.size()<s2.size())
            return true;
        return false;
    }

class Solution {
    public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end(),comp);
        string ans="";
        for(auto it:strs){
            cout<<it<<endl;
        }
        
        int loopdistrubed=0;
        for(int i=0;i<strs[0].size();i++){
            for(int j=1;j<strs.size();j++){
                if(strs[0][i]!=strs[j][i]){
                    {
                        loopdistrubed++;
                        break;
                    }
            }
            }
            if(loopdistrubed!=0)
                break;
            else{
                ans+=strs[0][i];
            }
    }
         return ans;
}
};


// above approch is mine
// after reading the discussion there is one more approch which i like 
// firstly short the vector without compretor 
// then just compare only first and last 