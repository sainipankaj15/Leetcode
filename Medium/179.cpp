bool pankaj(string a, string b)
{
    return a + b > b + a;
}

class Solution
{

public:
    string largestNumber(vector<int> &nums)
    {

        vector<string> s;

        for (auto it : nums)
        {
            s.push_back(to_string(it));
        }
        sort(s.begin(), s.end(), pankaj);

        string ans = "";
        for (auto it : s)
        {
            //    cout<<it<<" ";
            ans += it;
        }
        // here we have to check is string only zero like when array [0,0,0]
        // so 
        if(ans[0]=='0')
        return "0";
        return ans;
    }
};