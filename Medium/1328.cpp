class Solution {
public:
    string breakPalindrome(string palindrome) {
        if(palindrome.size()==1)
        return "";


        for(int i = 0; i<palindrome.size();i++){
            if(palindrome[i]!='a' && i!=palindrome.size()/2)
            {
                palindrome[i] = 'a';
                return palindrome;
            }
        }

        palindrome[palindrome.size()-1] = 'b';
        return palindrome;

    }
};

// i!=palindrome.size()/2 
// yeh sample case like "aba" then you can not change b direclty 