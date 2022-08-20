class Solution
{
public:
    bool repeatedSubstringPattern(string s)
    {

        int n = s.size();

        for (int i = 1; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                string sub = s.substr(0, i);
                // sub mai ek piece aa gaya h substring ka

                string t = "";
                //  t empty string h

                int count = n / i;
                // count is used for ki ushe substring ko how many times print karna h

                while (count > 0 && count--)
                {
                    t += sub;
                }

                if (t == s)
                    return 1;
            }
        }

        // otherwise no substring found
        return 0;
    }
};