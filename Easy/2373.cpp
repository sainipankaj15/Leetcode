class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        vector<vector<int>> ans;
        
        
        vector<int> level;
        int maxe = 0;
        
        for(int i=0;i<grid.size()-2;i++){
             vector<int> level;
            for(int j=0; j<grid.size()-2;j++){
                maxe = max({grid[i][j], grid[i][j+1] , grid[i][j+2], grid[i+1][j], grid[i+1][j+1] , grid[i+1][j+2], grid[i+2][j], grid[i+2][j+1] , grid[i+2][j+2]}) ;
                level.push_back(maxe);
            }
            ans.push_back(level);
        }
        
        
        return ans;
    }
};