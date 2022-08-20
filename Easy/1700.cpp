class Solution
{
public:
    int countStudents(vector<int> &students, vector<int> &sandwiches)
    {

        int zero = 0, one = 0;

        for (auto it : students)
        {
            if (it == 0)
                zero++;
            else
                one++;
        }

        int filled = 0;

        for (auto it : sandwiches)
        {

            if ((zero == 0 && it == 0) || (it == 1 && one == 0))
            {
                break;
            }

            if (it == 0 && zero > 0)
            {
                zero--;
                filled++;
            }
            if (it == 1 && one > 0)
            {
                one--;
                filled++;
            }
        }

        return sandwiches.size() - filled;
    }
};