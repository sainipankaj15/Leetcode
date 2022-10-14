//Using recursion
class Solution
{

    void subsetMaking(vector<vector<int>> &ans, vector<int> out, vector<int> nums, int start)
    {
        if (start >= nums.size())
        {
            if (out.size() > 0)
            {
                ans.push_back(out);
            }
            return;
        }

        out.push_back(nums[start]);
        subsetMaking(ans, out, nums, start + 1);
        out.pop_back();
        subsetMaking(ans, out, nums, start + 1);
    }

public:
    vector<vector<int>> subsets(vector<int> &nums)
    {
        vector<int> out;
        vector<vector<int>> ans;
        ans.push_back(out);
        int start = 0;
        subsetMaking(ans, out, nums, start);
        return ans;
    }
};