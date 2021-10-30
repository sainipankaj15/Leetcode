class Solution {
public:
    int maximum69Number (int num) {
        
        string s;
        
        s = to_string(num); // int to string
        
        for(int i=0;i<s.size();i++){
            if(s[i]=='6')
            {
                s[i] = '9';
                break;
            }
        }
    
        int ans=0;
        ans = stoi(s); // string to int

        
        return ans;
    }
};