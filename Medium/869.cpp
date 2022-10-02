class Solution {
public:
    bool reorderedPowerOf2(int n) {
        string s = to_string(n);
        sort(s.begin(),s.end());
        
        vector<string> v;
        
        for(int i = 0 ; i <31;i++){
            int k = pow(2,i);
            v.push_back(to_string(k));
        }
        
        
        for(int i = 0 ; i <31;i++){
           sort(v[i].begin(),v[i].end());
        }
        
        
        for(int i = 0 ; i<31;++i){
            if(v[i]==s)
                return 1;
        }
        
        return 0;
    }
};