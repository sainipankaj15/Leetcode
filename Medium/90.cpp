//Using recursion and set 
// TC O((2^N)*(N*logN)) + set mai daalne k liye logn add karege
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


// second method 

class Solution {

  
void subsetMaking(vector<vector<int>> &ans,vector<int> out, vector<int> nums, int start){

   ans.push_back(out);
   
    for(int i=start;i<nums.size();i++){
        if(i>start && nums[i]==nums[i-1])   continue;
    out.push_back(nums[i]);
    subsetMaking(ans,out,nums,i+1);
    out.pop_back();
    }


  }

public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {

        sort(nums.begin(),nums.end());
        vector<int> out;
        vector<vector<int>> ans;
        // ans.push_back(out);
        int start=0;
        subsetMaking(ans,out,nums,start);
        // vector<vector<int>> ansMain;
         
        // for(auto it : ans ){
        //     ansMain.push_back(it);
        // }
        return ans;
    }
};