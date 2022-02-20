class Solution {
public:
    int thirdMax(vector<int>& nums) {
     
        
        priority_queue<int> p;
        set<int> s;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        
        for(auto it=s.begin();it!=s.end();it++){
            p.push(*it);
        }
        
        if(p.size()<3)
            return p.top();
        else{
            p.pop();
            p.pop();
            return p.top();
        }
        
        
        
    }
    
};

// below code is more efficent 

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        
        long long third=LLONG_MIN,second=LLONG_MIN,first=LLONG_MIN;
        
        
        
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]>first){
                third = second;
                second = first;
                first = nums[i];
            }
        }
        
        if(third!=LLONG_MIN)
            return third;
        return first;
    }
};