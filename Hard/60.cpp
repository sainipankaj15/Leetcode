// this sequence of recusrion
// https://youtu.be/wT7gcXLYoao?list=PLgUwDviBIf0rGlzIn_7rsaR2FQ5e6ZOL9
// striver recusrion series last question
class Solution
{
public:
    string getPermutation(int n, int k)
    {
        vector<int> v(n);

        for (int i = 1; i <= n; i++)
        {
            v[i - 1] = i;
        }
        // v stores the number 1 to n
        int fact = 1;
        for (int i = 1; i < n; i++)
        {
            fact *= i;
        }
        // fact stores n-1 factorial

        string ans = "";
        k = k - 1;
        while (true)
        {
            ans = ans + to_string(v[k / fact]);
            v.erase(v.begin() + k / fact);
            if (!v.size())
                break;
            k = k % fact;
            fact = fact / v.size();
        }

        return ans;
    }
};