class Solution
{
public:
    bool checkAlmostEquivalent(string word1, string word2)
    {

        int w1[26] = {0};
        int w2[26] = {0};

        for (auto it : word1)
        {
            w1[it - 'a']++;
        }
        for (auto it : word2)
        {
            w2[it - 'a']++;
        }

        for (int i = 0; i < 26; ++i)
        {
            if (abs(w1[i] - w2[i]) > 3)
                return 0;
        }

        return 1;
    }
};