// more explaination see this video https://youtu.be/G1fRTGRxXU8
class Solution
{
    void combSum(vector<vector<int>> &ans, int start, vector<int> candidates, vector<int> out, int target)
    {

        if (target == 0)
        {
            // it means data structue (out ) mai wo elements aa gaye h jiska sum target k equal tha
            ans.push_back(out);
            return;
        }

        for (int i = start; i < candidates.size(); i++)
        {
            if (i > start && candidates[i] == candidates[i - 1])
            {
                // avoiding duplicate elements
                // i>ind esliey kykoi first time aayaga tho lena h , lekin second time aaya tho nahi bcoz repatition not allowed
                // more explaination https://youtu.be/G1fRTGRxXU8?list=PLgUwDviBIf0rGlzIn_7rsaR2FQ5e6ZOL9&t=1799
                continue;
            }
            if (candidates[i] > target)
                break; // return ;
            out.push_back(candidates[i]);
            combSum(ans, i + 1, candidates, out, target - candidates[i]);
            out.pop_back();
        }
    }

public:
    vector<vector<int>> combinationSum2(vector<int> &candidates, int target)
    {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> ans;
        int start = 0;
        vector<int> out;
        combSum(ans, start, candidates, out, target);
        return ans;
    }
};