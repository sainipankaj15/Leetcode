class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        vector<int> remaincap;
        
        for(int i=0;i<rocks.size();i++){
            remaincap.push_back(capacity[i]-rocks[i]);
        }
        sort(remaincap.begin(),remaincap.end());
        int ans=0;

        for(int i=0;i<rocks.size();i++){
           
            additionalRocks-=remaincap[i];
            if(additionalRocks<0)
            break;
            ans++;

        }
        return ans;
    }
};