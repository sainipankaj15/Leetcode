class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        unordered_map<int,int> m;
        for(auto it: nums){
            m[it]++;
        }
        int pairtotal=0;
        int singal = 0;

        for(auto it : m){
            pairtotal+=it.second/2;
              singal+=it.second%2;
          
        }

     

        return {pairtotal,singal};

    }
};