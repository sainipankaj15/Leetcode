class Solution
{
public:
    vector<int> maxSlidingWindow(vector<int> &nums, int k)
    {

        // if window size is greater than nums size
        if (nums.size() <= k)
        {
            sort(nums.begin(), nums.end());
            return {nums[nums.size() - 1]};
        }
        if (k == 1)
            return nums;

        vector<int> ans;

        multiset<int> store;
        // creating a multiset taaki me store all the elements if they are reptative also
        // in normal set i can not store a number if it's repeat

        // int maxtillnow=0;

        int i = 0, j = 0;
        while (j < nums.size())
        {

            store.insert(nums[j]);

            if (j - i + 1 < k)
                j++;
            else
            {

                ans.push_back(*store.rbegin());

                // just delting nums[i] from the multiset
                // so for that i will have to find the nums[i] in the multiset and then delete it
                auto it = store.find(nums[i]);
                store.erase(it);

                i++;
                j++;
            }
        }

        return ans;
    }
};

// there is one problem with the set is that it can not store the same number twice that's why we have to use multiset