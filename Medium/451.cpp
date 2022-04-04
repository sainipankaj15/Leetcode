// Our comporter function
bool pankaj(pair<char,int> P1, pair<char,int> P2){
    if(P1.second>P2.second)
        return true;
    return false;
}


class Solution {
public:
    string frequencySort(string s) {
        
        // first store in map with frequency
        unordered_map<char,int> m;
        
        for(auto it :s){
            m[it]++;
        }
        // as we know we can not sort map that's why i took the values in vector
        
        
        vector<pair<char,int>> v;
        
        for(auto it: m){
            v.push_back({it.first,it.second});
        }
        
        
        
        
        // oOOO yes we can sort vector
        sort(v.begin(),v.end(),pankaj);
        
        
        
        
        // make a string of ans which we will return 
        string ans="";
        
        for(auto it: v)
        {
            // jtine time frequency h utne time add kar dena h 
            while(it.second--){
                ans+=it.first;
            }
        }
       
        return ans;
        
    }
};