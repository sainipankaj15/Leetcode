// this is which I learnt from ABDUL bari DSA course 
// this is he explained in merge sort 
class Solution
{
public:
    void mergetwovector(vector<int> &nums, int left, int mid, int right)
    {


        vector<int> x(nums.begin()+left,nums.begin()+mid+1);
        vector<int> y(nums.begin()+mid+1,nums.begin()+right+1);

        int i=0,j=0;
        int xsize = x.size();
        int ysize = y.size();
        int k=left;
        while (i < xsize && j < ysize)
        {
            if (x[i] <= y[j])
            {
                nums[k++] = x[i++];
            }
            else
            {
                 nums[k++] = y[j++];
            }
        }

        while (i < xsize)
        nums[k++] = x[i++];
      
        while (j < ysize)
        nums[k++] = y[j++];

    }

    void mergesort(vector<int> &nums, int left, int right)
    {
        int i = left;
        int j = right;

        if (i < j)
        {
            int mid = i + (j - i) / 2;
            mergesort(nums, left, mid);
            mergesort(nums, mid + 1, right);
            mergetwovector(nums, i, mid, j);
        }
    }

    vector<int> sortArray(vector<int> &nums)
    {
        int i = 0;
        int j = nums.size() - 1;
        mergesort(nums, i, j);

        return nums;
    }
};



// below is same solution 


class Solution
{
public:
    void mergetwovector(vector<int> &nums, int left, int mid, int right)
    {
        // vector<int> alt(nums.size());

        vector<int> x(nums.begin()+left,nums.end()+mid+1);
        vector<int> y(nums.begin()+mid+1,nums.end()+right+1);


        // int i = left;
        // int j = mid + 1;
        // int k = left;
        int i=0,j=0;
        int xsize = x.size();
        int ysize = y.size();
        int k=left;
        while (i < xsize && j < ysize)
        {
            if (x[i] <= y[j])
            {
                nums[k++] = x[i++];
            }
            else
            {
                 nums[k++] = y[j++];
            }
        }

        while (i < xsize)
        {
             nums[k++] = x[i++];
        }

        while (j < ysize)
            nums[k++] = y[j++];

    }

    void mergesort(vector<int> &nums, int left, int right)
    {
        int i = left;
        int j = right;

        if (i < j)
        {
            int mid = i + (j - i) / 2;
            mergesort(nums, left, mid);
            mergesort(nums, mid + 1, right);
            mergetwovector(nums, i, mid, j);
        }
    }

    vector<int> sortArray(vector<int> &nums)
    {
        int i = 0;
        int j = nums.size() - 1;
        mergesort(nums, i, j);

        return nums;
    }
};