class Solution {
public:
    bool isPalindrome(string s) {
        
        // this is stl function and it will convert all letters in lowercase
       transform(s.begin(),s.end(),s.begin(), ::tolower);
         
        
        // After that what we are going to we are going to store all alphanumeric values(letters and numbers in a string)
            string p="";
            for(int i=0;i<s.size();i++){
                if((s[i]>96 && s[i]<123) || (s[i]>47 && s[i]<58)) {
                    p+=s[i];
                }
            }
        
        
        // we have solved 90% problem
        // last is we will reverse this string and will compare our created string
        // if both are same it means it is palindrome and answer is true
        // else false
        string revp =p;
        reverse(p.begin(),p.end());
        if(revp==p)
            return true;
        return false;
    }
};