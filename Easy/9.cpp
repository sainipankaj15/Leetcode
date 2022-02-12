class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return 0;
        string s = to_string(x); // converted into string
        string r = s;
        reverse(r.begin(),r.end()); // reversed of the string
        if(s==r)
        return 1; // if both are equal it means they are same and palindrome
        return 0; // else false
    }
};