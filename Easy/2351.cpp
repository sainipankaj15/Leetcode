class Solution
{
public:
    char repeatedCharacter(string s)
    {
        unordered_map<char, int> m;
        for (auto it : s)
        {
            if (m.find(it) != m.end())
            {
                return it;
            }
            m[it]++;
        }

        // code will not come here
        return 'a';
    }
};