class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        
        priority_queue<int> p;
        
        for(int i=0;i<score.size();i++){
            p.push(score[i]);
        }
        
        map<int,string> m;
        
        m[p.top()] = "Gold Medal";
           p.pop();
        if(!p.empty()){         
            m[p.top()] = "Silver Medal";
              p.pop();
        }
        if(!p.empty()){
          
            m[p.top()] = "Bronze Medal";
            p.pop();
        }
        
        for(int i=4;i<=score.size();i++){
            m[p.top()] = to_string(i);
            p.pop();
        }
        
        vector<string> ans;
        
        for(int i=0;i<score.size();i++){
            // auto it = m.find(score[i]);
            ans.push_back(m[score[i]]);
        }
        
        
        return ans;
        
        
    }
};