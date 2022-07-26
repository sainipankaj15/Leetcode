class Solution
{
public:
    vector<string> buildArray(vector<int> &target, int n)
    {

        int index[101] = {0};
        for (auto it : target)
        {
            index[it]++;
        }
        vector<string> ans;

        for (int i = 1; i <= target[target.size()-1]; i++)
        {
            ans.push_back("Push");
            if (index[i] == 0)
            {
                ans.push_back("Pop");
            }
        }

        return ans;
    }
};