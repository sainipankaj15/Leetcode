
bool pankaj(pair<int,int> p1,pair<int,int> p2){
    
    if(p2.second>p1.second)
        return true;
    if(p2.second==p1.second)
        if(p1.first<p2.first)
            return true;               
    return false;
}

class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
       // sort(mat.begin(),mat.end(),pankaj) ;
        
        vector<pair<int,int>> v;
         int count=0;
        for(int i=0;i<mat.size();++i){
            for(int j=0;j<mat[i].size();j++){
                if(mat[i][j]==1)
                    count++;
            }
            v.push_back({i,count});
            count=0;
        }
        
        
        sort(v.begin(),v.end(),pankaj);
        
        vector<int> ans;
        for(int i=0;i<v.size();++i)
            cout<<v[i].first<<" "<<v[i].second<<endl;
        
        cout<<endl<<endl;
        
        for(int i=0;i<k;++i){
            ans.push_back(v[i].first);
        }
        
        return ans;
    }
};