class Solution {
public:
    string reverseWords(string s) {
        
        vector<string> v;
        string p="";
        s+=" ";
        for(auto it : s)
        {
            if(it==' '){
                if(p.size())
                {   
                    p+=" ";
                    v.push_back(p);
                    p="";
                }
            }
            else
            p+=it;
        }

        string ans;
        reverse(v.begin(),v.end());
        for(auto it : v)
        ans+=it;
        
        ans.pop_back();

        return ans;

    }
};