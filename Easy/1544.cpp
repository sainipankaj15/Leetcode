class Solution {
public:
    string makeGood(string s) {
        string ans="";


        for(auto it : s){
            if(ans.size() && (it+32==ans.back() || it-32==ans.back())){
                ans.pop_back();
                continue;
            }
            ans.push_back(it);
        }


        return ans;
    }
};