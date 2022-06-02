class Solution {
public:
    int percentageLetter(string s, char letter) {
        int count=0;
        for(auto it:s){
            if(it==letter)
                count++;
        }
        count*=100;
        return count/s.size();
    }
};