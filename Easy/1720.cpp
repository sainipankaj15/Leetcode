class Solution
{
public:
    vector<int> decode(vector<int> &encoded, int first)
    {

        //         encoded[i] = arr[i]^arr[i+1];
        // we have arr[i] and want arr[i+1];
        // we know a propertry
        // (a^b)^a = b;
        // same as
        // encoded[i] = arr[i]^arr[i+1];
        // (encoded[i])^arr[i] = (arr[i]^arr[i+1])^arr[i];
        //          (encoded[i])^arr[i]  =  arr[i+1];

        vector<int> ans;

        ans.push_back(first);

        for (int i = 0; i < encoded.size(); i++)
        {
            ans.push_back(encoded[i] ^ ans[i]);
        }

        return ans;
    }
};