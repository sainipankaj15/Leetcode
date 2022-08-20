class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {

        vector<int> ans;

        for (int i = 0; i < m; i++)
        {
            ans.push_back(nums1[i]);
        }

        for (int i = 0; i < n; i++)
        {
            ans.push_back(nums2[i]);
        }

        sort(ans.begin(), ans.end());

        nums1 = ans;
    }
};

// method 2 efficent method 

class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {

        // https://leetcode.com/problems/merge-sorted-array/discuss/600243/C%2B%2B-solution-O(m%2Bn)-solution-with-detailed-explanation. took helped from here

        int k = m + n - 1; // ek dum last wala pointer jaha se fill hona start hoga

        int i = m - 1; // first array mai last element wala index ko show kargea

        int j = n - 1; // second array mai last element wala index ko show karegaa

        while (i >= 0 && j >= 0)
        {
            if (nums1[i] >= nums2[j])
            {
                // it means num1 wala bada h so isko last mai fill kar do ek dum

                nums1[k] = nums1[i];
                k--;
                i--;
            }
            else
            {
                // otherwise num2 wala bda hoga tho pahle isko fill kar do

                nums1[k] = nums2[j];
                k--;
                j--;
            }
        }

        // let say yadi i ya j zero ho jaate h tho indivisal ek ek ko dekh lenge

        while (i >= 0)
        {
            nums1[k] = nums1[i];
            k--;
            i--;
        }

        while (j >= 0)
        {
            nums1[k] = nums2[j];
            k--;
            j--;
        }
    }
};