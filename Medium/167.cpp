//Two pointers problem
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        
        int left=0;
        int right = numbers.size()-1;
        
        int sum = numbers[left]+numbers[right];
        
        
        while(sum!=target){
            if(sum<target)
                left++;
            else
                right--;
            sum = numbers[left]+numbers[right];
            
        }
        
        return {left+1,right+1};
        
    }
};
// also a good approch is a 
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        unordered_map<int,int> m;
        
        for(int i=0;i<numbers.size();i++){
            if(m.find(target-numbers[i])!=m.end()){
                return {m[target-numbers[i]],i+1};
            }
            m[numbers[i]] = i+1;
        
            
    }
        return { };
    }
};