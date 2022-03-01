class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        int ans=0;
        
        vector<int> px;
        
        for(int i=0;i<points.size();++i){
            px.push_back(points[i][0]);
        }
        sort(px.begin(),px.end());
        
        ans = px[1]-px[0];
        for(int i=0;i<px.size()-1;++i){
            if(px[i+1]-px[i]>ans){
                ans = px[i+1]-px[i];
            }
            
        }
        
        
        return ans;
    }
};
// logic is only x cordinate sort kargee uske baad max difference dekh lenge sabme 