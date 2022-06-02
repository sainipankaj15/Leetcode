class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {

        vector<int> ans;

        int left = 0;
        int top = 0;

        int right = matrix[0].size() - 1;
        int bottom = matrix.size() - 1;

        int totalsize = (right+1)*(bottom+1);

        int count = 0;
        while (count<totalsize)
        {

            // filling first row
            if (count < totalsize)
            {
                for (int i = left; i <= right; i++)
                {
                    ans.push_back(matrix[top][i]);
                    count++;
                }
                top++;
            }

            // fillling last column
            if (count < totalsize)
            {
                for (int i = top; i <= bottom; i++)
                {
                    ans.push_back(matrix[i][right]);
                    count++;
                }
                right--;
            }

            // filling last row
            if (count < totalsize)
            {
                for (int i = right; i >= left; i--)
                {
                    ans.push_back(matrix[bottom][i]);
                    count++;
                }
                bottom--;
            }

            // filling first column
            if (count < totalsize)
            {
                for (int i = bottom; i >= top; i--)
                {
                    ans.push_back(matrix[i][left]);
                    count++;
                }
                left++;
            }
        }

        return ans;
    }
};