class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int> a;
        
        for(int i=0;i<ops.size();i++){
            if(ops[i]=="+" || ops[i]=="D" || ops[i]=="C"){
                if(ops[i]=="D"){
                    a.push_back(2*a[a.size()-1]);
                }
                if(ops[i]=="C"){
                    a.pop_back();
                }
                if(ops[i]=="+"){
                    a.push_back(a[a.size()-1]+a[a.size()-2]);
                }
            }
            else{
                int c = stoi(ops[i]);
                a.push_back(c);
            }
        }
        
        
        for(auto it:a)
            cout<<it<<" ";
        
        
        int ans = accumulate(a.begin(),a.end(),0);
        return ans;
        
        
    }
};