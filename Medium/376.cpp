// for this question : logic dont triggered to me at first time 
// I took help from the discussion section and here u go 

// Method 1
class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        if(nums.size()<2)
            return nums.size();
        else{
           
            vector<int> diff;
            
            for(int i=1;i<nums.size();++i){
                diff.push_back(nums[i]-nums[i-1]);
            }
            
            
           while(1){
            if(diff[0]==0 && diff.size()>0){
                diff.erase(diff.begin());
            }
               else
                   break;
           }
            
            for(int i=1;i<diff.size();++i){
                if(diff[i]>0 && diff[i-1]>0){
                    diff.erase(diff.begin()+i);
                    i--;
                }
                  if(diff[i]<0 && diff[i-1]<0){
                    diff.erase(diff.begin()+i);
                    i--;
                }
                if(diff[i]==0){
                    diff.erase(diff.begin()+i);
                    i--;
                }
            }
            
            return diff.size()+1;
        }
    }
};


//Method 2
// then i just put all statments in single if for the last loop
// and leetcode as always gave 100% fast it 
class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        if(nums.size()<2)
            return nums.size();
        else{
           
            vector<int> diff;
            
            for(int i=1;i<nums.size();++i){
                diff.push_back(nums[i]-nums[i-1]);
            }
            
            
           while(1){
            if(diff[0]==0 && diff.size()>0){
                diff.erase(diff.begin());
            }
               else
                   break;
           }
            
            for(int i=1;i<diff.size();++i){
                if(diff[i]>0 && diff[i-1]>0 || diff[i]==0 || diff[i]<0 && diff[i-1]<0 ){
                    diff.erase(diff.begin()+i);
                    i--;
                }
             
            }
            
            return diff.size()+1;
        }
    }
};


