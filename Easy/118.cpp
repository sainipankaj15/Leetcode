class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> a(31);
        a[0].push_back(1);
        a[1].push_back(1);
        a[1].push_back(1);
        
        for(int i=2;i<31;i++){
            a[i].push_back(1);
            int loopcount=i-1;
            while(loopcount--){
                a[i].push_back(a[i-1][a[i].size()]+a[i-1][a[i].size()-1]);
            }
            a[i].push_back(1);
        }
        // return a(numRows);
         vector<vector<int>> b;
        
        for(int i=0;i<numRows;i++){
            b.push_back(a[i]);
        }
        return b;
        
      
    }
};