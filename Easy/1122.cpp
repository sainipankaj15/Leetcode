class Solution
{
public:
    vector<int> relativeSortArray(vector<int> &arr1, vector<int> &arr2)
    {

        vector<int> v(1001);

        for (auto it : arr1)
        {
            v[it]++;
        }

        vector<int> ans;

        for (auto it : arr2)
        {

            while (v[it] > 0)
            {
                ans.push_back(it);
                v[it]--;
            }
        }

        for (int i = 0; i < 1001; i++)
        {
            while (v[i] > 0)
            {
                ans.push_back(i);
                v[i]--;
            }
        }

        return ans;
    }
};