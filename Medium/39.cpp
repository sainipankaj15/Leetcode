class Solution {

     void combSum(vector<vector<int>> &ans,int start, vector<int> candidates, vector<int> out, int target){
         // out is empty vector 
         // start is the starting index which is zero initial 

         // Now we will use pick and non pick concept 
         // remember in this question we can any element at ""many times""

         if(start==candidates.size()){
             // we will decrease target in every recursion call to make it zero 
             if(target==0){
                 // it means out mai jo h wo humara answer h 
                 ans.push_back(out);
                //  return ;
             }
             return ;
         }
         
         // Now we will check first element must be less than out target
         if(candidates[start]<=target)
         {
         out.push_back(candidates[start]);
         target -= candidates[start];
         combSum(ans,start,candidates,out,target);
         out.pop_back();
         target+=candidates[start];
         }
         
         combSum(ans,start+1,candidates,out,target);
     }


public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        int start=0;
        vector<int> out;      
        combSum(ans,start,candidates,out,target);
        return ans;
    }
};