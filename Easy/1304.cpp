class Solution {
public:
    vector<int> sumZero(int n) {
        
        vector<int> ans;
        
        int a = n%2;
        
        if(a==1){
            ans.push_back(0);
            n--;
        }
        
        a = n/2;
        
        for(int i=1;i<=a;i++){
            ans.push_back(i); 
             ans.push_back((-1)*i); 
        }
        
        return ans;
        
        
        
    }
};