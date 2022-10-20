class Solution {
public:
    bool checkIfPangram(string sentence) {
        int a[26]={0};

        for(auto it:sentence){
            a[it-'a'] = 1;
        }

        for(auto it : a ){
            if(it==0)
            return 0;
        }
        return true;
    }
};