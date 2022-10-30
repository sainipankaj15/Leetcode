class Solution
{
    void recpremute(vector<vector<int>> &ans, int start, vector<int> &nums)
    {
        if (start == nums.size())
        {
            ans.push_back(nums);
            return;
        }

        set<int> s;
        unordered_map<int, int> m;
        for (int i = start; i < nums.size(); i++)
        {
            //    if(s.find(nums[i])!=s.end())
            //    continue ;
            //    s.insert(nums[i]);
            if (m.find(nums[i]) == m.end())
            {
                swap(nums[i], nums[start]);
                recpremute(ans, start + 1, nums);
                swap(nums[i], nums[start]);
            }
            m[nums[i]]++;
        }
    }

public:
    vector<vector<int>> permuteUnique(vector<int> &nums)
    {
        vector<vector<int>> ans;
        int start = 0;
        recpremute(ans, start, nums);
        return ans;
    }
};