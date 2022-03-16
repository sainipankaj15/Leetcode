class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        if(nums.size()==1)
            return 0;
        else{
            vector<int> front(nums.size()), end(nums.size());
            
            int push=0;
            
            for(int i=0;i<nums.size();i++){
                push+=nums[i];
                front[i] = push;
            }
            
             // for(int i=0;i<nums.size();i++)
             //     cout<<front[i]<<" ";
            
            push = 0;
            
              for(int i=0;i<nums.size();i++){
                push+=nums[nums.size()-1-i];
                end[nums.size()-1-i] = push;
            }
            
            
            
            
            
            for(int i=0;i<nums.size();i++){
                if(front[i]==end[i])
                    return i;
            }
            return -1;
            
        }
    }
};

// second method is more powerful and efficent
class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        if(nums.size()==1)
            return 0;
        else{
                    
            int right_sum=0;
            int left_sum=0;
            
            for(int i=0;i<nums.size();i++){
                right_sum+=nums[i];
            }
            
                         
              for(int i=0;i<nums.size();i++){
              
                  right_sum-=nums[i];
                  if(left_sum==right_sum)
                      return i;                 
                  left_sum+=nums[i];
            }
            
            
            
            
           // otherwise
            return -1;
            
        }
    }
};509