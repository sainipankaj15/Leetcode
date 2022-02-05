// bool pankaj(int a, int b){
    
//     if(a==0 || b==0)
//         return false;
//     if(a%2==0 && b%2==1)
//         return false;
    
//     if(b%2==0 && a%2==1)
//         return false;
//     if(a%2==1 && b%2==1)
//         return false;
//     return true;
    
// }

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {

//         sort(nums.begin(),nums.end(),pankaj);
//         reverse(nums.begin(),nums.end());
//         return nums;
        
        
        int left=0,right=0;

         for(int i=0;i<nums.size();i++){
          if(nums[i]%2==0){
              swap(nums[left],nums[i]);
              left++;
          }   
         }
        
        return nums;
        
    }
};



// second is 



class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
              
        vector<int> ans;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                ans.push_back(nums[i]);
            }
        }
           for(int i=0;i<nums.size();i++){
            if(nums[i]%2==1){
                ans.push_back(nums[i]);
            }
        }
        
        return ans;
        
        
    }
};



// third is we can do it by comprateror funciton
// but it will increase the time complexity
// this is 
bool pankaj(int a, int b){
    
    if(a%2==0 && b%2==1)
        return true;
    // if a number is even then it is true othwerwise false

    return false;
    
}

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {

        sort(nums.begin(),nums.end(),pankaj);
        return nums;
      
        
    }
};