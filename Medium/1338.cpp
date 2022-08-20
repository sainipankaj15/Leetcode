class Solution
{
public:
    int minSetSize(vector<int> &arr)
    {
        int ans = 0;

        unordered_map<int, int> m;

        for (auto it : arr)
        {
            m[it]++;
        }

        priority_queue<int> pq;

        for (auto it : m)
        {
            pq.push(it.second);
        }

        int arrsize = arr.size();

        int count = 0;

        while (count < arrsize / 2)
        {
            ans++;
            count += pq.top();
            pq.pop();
        }
        return ans;
    }
};