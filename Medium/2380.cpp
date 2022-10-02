class Solution
{
public:
    int secondsToRemoveOccurrences(string s)
    {
        int one = count(s.begin(), s.end(), '1');

        int swap = 0; // this is our answer
        int i = 0;

        while (one)
        {
            if (s[i] == '1')
            {
                one--;
                i++;
            }
            else
            {
                // it means ushe wali position par zero h

                for (int j = i; j < s.size(); j++)
                {
                    if (s[j] == '0' && s[j + 1] == '1')
                    {
                        s[j] = '1';
                        s[j + 1] = '0';
                        j++;
                    }
                }

                swap++;
            }
        }

        return swap;
    }
};