// dutch national flag algorithm
class Solution
{
public:
    void sortColors(vector<int> &nums)
    {

        int low = 0;
        int mid = 0;
        int high = nums.size() - 1;
        // what we will do
        // if nums[mid] =  1 then mid++;
        // if nums[mid] = 0 then low and mid dono ++; and also swapped the value
        // if nums[mid] =  2 then mid++ and high--; and also swappped the value

        while (mid <= high)
        {
            if (nums[mid] == 0)
            {
                // swap mid and low
                swap(nums[mid], nums[low]);
                mid++;
                low++;
            }
            else if (nums[mid] == 1)
            {
                mid++;
            }
            else
            {
                // swap mid and high
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};


// method 2 
// sort kar do 

// method 3 
// total one two and zero count kar loo and fill kar do 
// lekin waha TC  O(n)+O(n) = ho jaata h 
// one time for counting and one time for filling 
// so above algorithim dutch national flag algorithm do it just one traversal