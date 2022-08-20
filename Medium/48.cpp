class Solution
{
public:
    void rotate(vector<vector<int>> &matrix)
    {
        vector<vector<int>> newmat(matrix.size(), vector<int>(matrix.size(), 0));

        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = 0; j < matrix[i].size(); j++)
            {
                newmat[j][matrix.size() - i - 1] = matrix[i][j];
            }
        }

        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = 0; j < matrix[i].size(); j++)
            {
                matrix[i][j] = newmat[i][j];
            }
        }
    }
};

// above TC = O(N*N)
// SC  = O(N*N)

// second method
// TC = O(N*N) + O(N*N)
// SC = order of 1

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector<vector<int>> newmat(matrix.size(),vector<int>(matrix.size(),0));
        
        for(int i = 0 ; i <matrix.size();i++){
            for(int j=i;j<matrix[i].size();j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        
         for(int i = 0 ; i <matrix.size();i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};
    