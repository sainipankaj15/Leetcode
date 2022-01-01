class Solution
{
public:
    int maxDistance(vector<int> &colors)
    {

        vector<int> ans;

        for (int i = 0; i < colors.size() - 1; i++)
        {
            for (int j = i + 1; j < colors.size(); j++)
            {
                if (colors[i] != colors[j])
                {

                    int a = abs(j - i);
                    ans.push_back(a);
                }
            }
        }
        sort(ans.begin(), ans.end());
        return ans[ans.size() - 1];
    }
};

// second wala jaayda better h
class Solution
{
public:
    int maxDistance(vector<int> &colors)
    {

        int max = 0;
        int a = 0;
        for (int i = 0; i < colors.size() - 1; i++)
        {
            for (int j = i + 1; j < colors.size(); j++)
            {
                if (colors[i] != colors[j])
                {

                    a = j - i;
                    if (a > max)
                    {
                        max = a;
                    }
                }
            }
        }

        return max;
    }
};