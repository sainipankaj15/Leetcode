class Solution {
public:
    void reverseString(vector<char>& s) {
        vector<char> ans;
        
//         for(int i=0;i<s.size();i++){
//             ans.push_back(s[s.size()-1-i]);
//         }
//           for(int i=0;i<s.size();i++){
//             // ans.push_back(s[s.size()-1-i]);
//               cout<<ans[i];
//         }
        
          for(int i=0;i<s.size()/2;i++){
            swap(s[i],s[s.size()-1-i]);
        }
        
    }
};