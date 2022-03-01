class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        
        
        sort(arr.begin(),arr.end());
        multimap<int,int> m;
        
        for(int i=0;i<arr.size();i++){
            bitset<32> b(arr[i]);
            m.insert({b.count(),arr[i]});
            // m[b.count()] = arr[i]; // this thing doest not work in multi map
        }
        
        
        vector<int> ans;
        
        for(auto it:m){
            cout<<it.first<<" "<<it.second<<endl;
            ans.push_back(it.second);
        }
        
        
        return ans;
        
    }
};