class Solution
{
public:
    vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
    {

        vector<bool> ans;
        int whatmax = candies[0];

        for (int i = 1; i < candies.size(); i++)
        {
            if (candies[i] > whatmax)
            {

                whatmax = candies[i];
            }
        }

        for (int i = 0; i < candies.size(); i++)
        {
            candies[i] += extraCandies;
        }

        for (int i = 0; i < candies.size(); i++)
        {
            if (candies[i] >= whatmax)
            {

                ans.push_back(true);
            }
            else
            {
                ans.push_back(false);
            }
        }

        return ans;
    }
};