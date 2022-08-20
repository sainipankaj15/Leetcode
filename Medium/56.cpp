bool pankaj(vector<int> v1, vector<int> v2)
{
    if (v1[0] < v2[0])
        return true;
    else
    {
        if (v1[0] == v2[0])
        {
            if (v1[1] < v2[1])
                return true;
        }
    }

    return false;
}



class Solution
{

public:
    vector<vector<int>> merge(vector<vector<int>> &intervals)
    {

        sort(intervals.begin(), intervals.end(), pankaj);

        vector<vector<int>> ans;

        int low = intervals[0][0], high = intervals[0][1];

        for (int i = 1; i < intervals.size(); i++)
        {
            if (intervals[i][0] <= high)
            {
                high = max(high, intervals[i][1]);
            }
            else
            {
                vector<int> v;
                v.push_back(low);
                v.push_back(high);
                ans.push_back(v);
                low = intervals[i][0];
                high = intervals[i][1];
            }
        }

        vector<int> v;
        v.push_back(low);
        v.push_back(high);
        ans.push_back(v);
        return ans;
    }
};