class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int x=-1;
        for(int i=0;i<nums1.size();i++){
              x = -1;
            for(int j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j]){
                    for(int k=j+1;k<nums2.size();k++){
                        if(nums2[k]>nums1[i]){
                            x = max(nums2[k],x);
                            break;
                        }
                    }
                    break;
                }
            }
            // cout<<x;
            nums1[i]=x;
        }
        
        
        return nums1;
        
    }
};

// below method using stack 
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        
        vector<int> ans(nums1.size(),-1);
        unordered_map<int,int> m;
        stack<int> s;
        
        for(int i=0;i<nums2.size();i++){
            
            while(!s.empty()  && nums2[i]>s.top()){
                m[s.top()] = nums2[i];
                s.pop();                
            }
            
            s.push(nums2[i]);
        }
        
        
        for(int i=0;i<nums1.size();i++){
            if(m.find(nums1[i])!=m.end()){
                ans[i] = m[nums1[i]];
            }
            
            // above 2 lines and below 2 lines are same but you can save time by writing below lines
            
            // if(m[nums1[i]]){
            //     ans[i] = m[nums1[i]];
            // }
        }
        
        return ans;
        
    }
}; 