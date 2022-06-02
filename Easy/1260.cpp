class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        deque<int> g;
        
        int row = grid.size();
        int column = grid[0].size();
        
        for(int i=0;i<row;i++){
            for(int j=0;j<column;j++){
                g.push_back(grid[i][j]);
            }
        }
        
        
        //running k times
        while(k--){
            int c = g.back();
            g.pop_back();
            g.push_front(c);
        }
        
        
        //again set in matrix
         for(int i=0;i<row;i++){
            for(int j=0;j<column;j++){
                grid[i][j] = g.front();
                g.pop_front();
            }
        }
        
        
        return grid;
              
        
    }
};

// for more read this 
//https://leetcode.com/problems/shift-2d-grid/discuss/1935248/simple-solution-using-deque-in-cpp