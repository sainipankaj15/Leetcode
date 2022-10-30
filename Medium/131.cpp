// this is recursion problem
// https://youtu.be/WBgsABoClE0

class Solution
{

    bool isPlaindrome(string s, int start, int end)
    {
        while (start <= end)
        {
            if (s[start] != s[end])
            {
                return false;
            }
            start++;
            end--;
        }

        return true;
    }

    void solve(int start, vector<vector<string>> &ans, vector<string> &path, string s)
    {
        if (start == s.size())
        {
            ans.push_back(path);
            return;
        }

        for (int i = start; i < s.size(); i++)
        {
            if (isPlaindrome(s, start, i))
            {
                path.push_back(s.substr(start, i - start + 1));
                solve(i + 1, ans, path, s);
                path.pop_back();
            }
        }
    }

public:
    vector<vector<string>> partition(string s)
    {
        vector<vector<string>> ans;
        vector<string> path;
        int start = 0;
        solve(start, ans, path, s);
        return ans;
    }
};