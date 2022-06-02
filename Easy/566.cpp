//method 1
class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        
        int row = mat.size();
        int column = mat[0].size();
        if(row*column!=r*c)
            return mat;
        
        //otherwise
        deque<int> value;
        
        for(auto it: mat)
        {
            for(auto it1: it){
                value.push_back(it1);
            }
        }
        
        
        vector<vector<int>> ans(r,vector<int>(c,0));
        
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                ans[i][j] = value.front();
                value.pop_front();
            }
        }
        
     
        return ans;
        
    }
};


//method 2
class Solution
{
public:
    vector<vector<int>> matrixReshape(vector<vector<int>> &mat, int r, int c)
    {

        int row = mat.size();
        int column = mat[0].size();
        if (row * column != r * c)
            return mat;

        vector<vector<int>> ans(r, vector<int>(c));
        for (int i = 0; i < row * column; i++)
            ans[i / c][i % c] = mat[i / column][i % column];
        return ans;

        //  below lines are copied from discusion section but powerful
        
        //  i/c will give us the row number of output matrix. We will move to New row after every c elements and thus dividing by c will give the row number

        // i%c will give us the column number of output matrix. We will be begin from start of new row after every c elements and this the remainder will give column of current row.

        // The same happens in i/column and i%column but for the mat matrix
    }
};