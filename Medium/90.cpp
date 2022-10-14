//Using recursion
class Solution {
    void subsetMaking(set<vector<int>> &ans,vector<int> out, vector<int> nums, int start){
    if(start>=nums.size()){
        if(out.size()>0){
            sort(out.begin(),out.end());
            ans.insert(out);
        }
        return ;
    }
    out.push_back(nums[start]);
    subsetMaking(ans,out,nums,start+1);
    out.pop_back();
    subsetMaking(ans,out,nums,start+1);

  }

public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> out;
        set<vector<int>> ans;
        ans.insert(out);
        int start=0;
        subsetMaking(ans,out,nums,start);
        vector<vector<int>> ansMain;
         
        for(auto it : ans ){
            ansMain.push_back(it);
        }
  
 
        return ansMain;
    }
};