class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {

        int profit = 0;
        int buy = 0;
        int sell = 0;

        buy = prices[0];
        for (int i = 0; i < prices.size(); i++)
        {
            buy = min(buy, prices[i]);
            sell = prices[i] - buy;

            if (profit < sell)
                profit = sell;
        }
        return profit;
    }
};