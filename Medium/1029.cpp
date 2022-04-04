class Solution
{
public:
    int twoCitySchedCost(vector<vector<int>> &costs)
    {

        int ans = 0;

        vector<int> cost;

        // actually hum half poeple(n)  ko A city behjna h
        // and half ko B city bhejna h question mai likha hua h yeh cheez
        for (auto it : costs)
        {
            ans += it[0];
            cost.push_back(it[0] - it[1]);
        }

        //         see abe tak kya kiya na
        // ans mai saare k first add kar liya h and cost wale mai unke difference ko
        // add cost wale ko decreasing order mai laga de
        // taaki wo elements aage aa jaaye jinke liye acosti>bcosti se
        // aur bas half of elements k liey wo gap jo tha wo remove kar denge taaki bcosti aa jaayee

        // it is like a-b = c
        // then a-c = a-(a-b) = b dekhoo aa gaya second elemnet

        sort(cost.begin(), cost.end(), greater<int>());

        for (int i = 0; i < cost.size() / 2; i++)
        {
            ans -= cost[i];
        }

        return ans;
    }
};