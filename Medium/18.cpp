class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        
        // base case
        if(nums.size()<4)
        return ans;

        sort(nums.begin(),nums.end());
        int n = nums.size();
        for(int i = 0 ; i < n ;i++){
            long long int target_3 = (long long )target - (long long)nums[i];
            
            for(int j=i+1;j<n;j++){
                long long int target_2 = (long long) target_3 - (long long) nums[j];

                // now we have only taget_2 which we have to find sum of 2 so we will use 2 pointer

                int y = j+1;
                int z = n-1;

                while(y<z){
                    long long int sum2 = (long long) nums[y]+ (long long) nums[z];
                    if(sum2<target_2){
                        y++;
                    }
                    else if(sum2>target_2){
                        z--;
                    }
                    else{
                        vector<int> v ;
                        v.push_back(nums[i]);
                        v.push_back(nums[j]);
                        v.push_back(nums[y]);
                        v.push_back(nums[z]);
                        ans.push_back(v);

                        // third element copy na ho uske liye loop
                        while(y<z && nums[y]==v[2])
                        y++;

                        // fourth element copy na ho uske liye loop
                        while(y<z && nums[z]==v[3])
                        z--;
                    }
                }


                // second element duplicate na ho ushe liye loop
                while(j+1<n && nums[j+1]==nums[j])
                j++;
            }



            // first element duplicate na ho uske liye loop
            while(i+1<n && nums[i+1]==nums[i])
            i++;
        }


        return ans;

    }
};

// for better understanding I read this solution
//https://leetcode.com/problems/4sum/solutions/2764470/commented-c-solution/