bool uniquecharacter(string p){
    
    for(int i=0;i<p.size()-1;i++){
        for(int j=i+1;j<p.size();j++){
            if(p[i]==p[j])
                return false;
        }
    }
return true;    
}

class Solution {
public:
    int countGoodSubstrings(string s) {
        
        
        
        int ans=0;
        
        int i=0,j=0;
        string a="";
        for(int j=0;j<s.size();j++){
            a+=s[j];
            if((j-i+1)<3){
                
            }
            else{
                bool yesorno = uniquecharacter(a); //checking this is true or  not
                
                if(yesorno==1)
                    ans++;
                a.erase(a.begin());
                i++;
                
            }
        }
        
        
        
        return ans;
        
        
        
        
        
        
    }
};

// this is slding window question