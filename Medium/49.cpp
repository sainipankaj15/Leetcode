class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> m;
        for(auto it : strs){
            auto i = it;
            sort(i.begin(),i.end());
            m[i].push_back(it);
        }

        vector<vector<string>> ans;
        for(auto it : m){
            ans.push_back(it.second);
        }
        return ans;
    }
};