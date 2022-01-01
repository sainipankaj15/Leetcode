class Solution {
public:
    string reverseWords(string s) {
        
        vector<string> pankaj;
        
        string p="";
        
        for(int i=0;i<s.size();i++)
        {
          
            if(s[i]==' '){
                pankaj.push_back(p);
                p = "";
            }
              else
                  p+=s[i];
        }
        
        pankaj.push_back(p);
        
        
        for(int i=0;i<pankaj.size();i++){
            reverse(pankaj[i].begin(),pankaj[i].end());
        }
        
        string ans="";
        for(int i=0;i<pankaj.size();i++){
            ans+=pankaj[i];
            ans+=" ";
        }
        // ans.erase(ans.begin()+ans.size()-1);
        ans.erase(ans.end()-1);
        // both lines are same we can use anyone
        
        return ans;
        
        
    }
};

// above solution take much time 
// second take less time and memory 
class Solution {
public:
    string reverseWords(string s) {
        
        int k=0;
        
         for(int i=0;i<s.size();i++)
        {
          
            if(s[i]==' '){
                 reverse(s.begin()+k,s.begin()+i);
                k = i;
                k++;
           
            }
             
        }
        
        
        //last element ok rotate karne k liye
         reverse(s.begin()+k,s.end());
                 
        return s;        
    
        
    }
};