class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        for(int i=0;i<nums.size();i++){
            nums[i] = nums[i]*nums[i];
        }
        
        sort(nums.begin(),nums.end());
        return nums;
    }
};

// above code in O(n*logN) 
// Below code in O(N)
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        
        map<int,int> m;
        for(int i=0;i<nums.size();i++){
            nums[i] = abs(nums[i]);
            m[nums[i]]++;
        }
        
        // debugging
        // for(auto it : m){
        //     cout<<it.first<<endl;
        // }
        
        nums.clear();
        int c=0;
        for(auto it:m){
            c = it.second;
            while(c--){
                nums.push_back(it.first*it.first);
            }
        }
        return nums;
    }
};