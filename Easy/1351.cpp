class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        
        
        int i = grid.size()-1;
        int j = 0;
       
        int sum=0;
        while(i>=0 && j<grid[0].size()){
            if(grid[i][j]<0){
                // cout<<grid[i][j]<<" "<<"I value is "<<i<<" J value is"<<j<<endl;
                sum = sum + (grid[0].size()-j);
                // cout<<sum<<" ";
                i--;
            }
            else{
                j++;
            }
        }
        return sum;
        
        
    }
};