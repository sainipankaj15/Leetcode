class Solution {
public:
    bool buddyStrings(string s, string goal) {
        if(s.size()!=goal.size()  || s.size()==1 ){
            return false;
        }
        else{
            int a[26]={0};
            for(int i=0;i<s.size();i++){
              if(s[i]==goal[i]){
                   a[s[i]-'a']++;
                    s.erase(s.begin()+i);
                goal.erase(goal.begin()+i);
                 
                    i--;
              }
            }
            
            if(s[0]==goal[1] && s[1]==goal[0] && s.size()==2)
                return true;
            else{
                if(s.size()==0 && goal.size()==0){
                    for(int i=0;i<26;i++){
                        if(a[i]>1)
                            return true;
                    }
                }
                return false;
                
            }
            
            
            
            
        }
        
    }
};