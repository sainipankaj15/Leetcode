class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        int k=0;
        int ans=0;
        
        for(int i=0;i<s.size();i++){
            for(int j=k;j<t.size();j++){
                if(s[i]==t[j]){
                    k = j+1;
                    ans++;
                    break;
                }
            }
        }
        
        if(ans==s.size())
            return 1;
        
        
        return 0;
    }
};


// second approch
// more better approch than me
// two pointer 

// I copied it just to understand my apporch i already submit it
class Solution {
public:
    bool isSubsequence(string s, string t) 
    {
        if(s.size() > t.size())  // Obvisoly 
        {
            return false;
        }
        
        
        
        int i=0;// pointing string s
        int j=0;// pointing string t
        
        while(i<s.size() and j < t.size())
        {
            if(s[i] == t[j])
            {
                i++;
                j++;
            }
            else
                j++;
        }
        
        
        // if i completd rotated 
        if(i == s.size())
        {
            return true;
        }
        
        
        // in any case
        return false;   
    }
};