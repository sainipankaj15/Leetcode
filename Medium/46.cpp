// for approch 2
// https://youtu.be/f2ic2Rsc9pU

class Solution
{
    void recpremute(vector<vector<int>> &ans, vector<int> ds, vector<int> nums, int freq[])
    {
        if (ds.size() == nums.size())
        {
            ans.push_back(ds);
            return;
        }

        for (int i = 0; i < nums.size(); i++)
        {
            if (!freq[i])
            {
                ds.push_back(nums[i]);
                freq[i] = 1;
                recpremute(ans, ds, nums, freq);
                ds.pop_back();
                freq[i] = 0;
            }
        }
    }

public:
    vector<vector<int>> permute(vector<int> &nums)
    {
        vector<vector<int>> ans;

        vector<int> ds;
        int k = nums.size();
        int freq[k];

        for (int i = 0; i < nums.size(); i++)
           freq[i] = 0;
        recpremute(ans, ds, nums, freq);
        return ans;
    }
};

// In above approch by carrying another datastructure we are increasign space complexity
// we can reducing this TC by swapping the element
class Solution
{

    void recpremute(vector<vector<int>> &ans, int start, vector<int> &nums)
    {
        if (start == nums.size())
        {
            ans.push_back(nums);
            return;
        }

        for (int i = start; i < nums.size(); i++)
        {
            swap(nums[i], nums[start]);
            recpremute(ans, start + 1, nums);
            swap(nums[i], nums[start]);
        }
    }

public:
    vector<vector<int>> permute(vector<int> &nums)
    {
        vector<vector<int>> ans;

        vector<int> ds;
        //  int k = nums.size();
        //  int freq[k];

        //  for(int i = 0 ; i<nums.size();i++)
        //  freq[i] = 0 ;
        int start = 0;
        recpremute(ans, start, nums);
        return ans;
    }
};