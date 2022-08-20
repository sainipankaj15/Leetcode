class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        set<int> s;
        
        for(auto it:nums){
            if(it>0){
                s.insert(it);
            }
        }
        
        
        for(int i=1;i<=500001;i++){
            if(s.find(i)==s.end())
                return i;
        }
        
        
        // code will not come here
        return -1;
    }
};

// above approch is taking extra space which is O(n) 
// so in given question there is statement u have to use constant space 
// so trying with another method