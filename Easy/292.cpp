class Solution {
public:
    bool canWinNim(int n) {
        int k = n%4;
        if(k==0)
            return false;
        else
            return true;
    }
};