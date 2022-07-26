class Solution
{
public:
    int equalPairs(vector<vector<int>> &grid)
    {
        // basic approch is that take one column and count ouurcences row wise in grid;
        int ans = 0;
        for (int i = 0; i < grid.size(); i++)
        {
            vector<int> v;

            for (int j = 0; j < grid.size(); j++)
            {
                v.push_back(grid[j][i]);
            }

            ans = ans + count(grid.begin(), grid.end(), v);
        }

        return ans;
    }
};