class Solution
{
public:
    vector<int> buildArray(vector<int> &nums)
    {

        vector<int> a;
        int sum = nums[0];

        for (int i = 0; i < (nums.size() - 1); i++)
        {
            a.push_back(nums[sum]);
            sum = nums[i + 1];
        }

        // a.push_back(sum);
        a.push_back(nums[sum]);
        return a;
    }
};

// probelm link https://leetcode.com/problems/build-array-from-permutation/