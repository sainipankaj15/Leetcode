class Solution {
public:
    string toLowerCase(string s) {
        
        
        for(int i=0;i<s.size();i++){
            int a = s[i];
            if(a>64 && a<91)
            {
                a+=32;
                s[i] = a;
            }
            // s[i] = tolower(s[i]);
        }
        
        return s;
    }
};


// second approch : inbulit function
class Solution {
public:
    string toLowerCase(string s) {
        
        
        for(int i=0;i<s.size();i++){
            s[i] = tolower(s[i]);
        }
        
        return s;
    }
};