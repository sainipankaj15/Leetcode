class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        
        horizontalCuts.push_back(0);
        horizontalCuts.push_back(h);
        sort(horizontalCuts.begin(),horizontalCuts.end());
        
        
        verticalCuts.push_back(0);
        verticalCuts.push_back(w);
        sort(verticalCuts.begin(),verticalCuts.end());
        
        
        int maxh=0; long long int maxw=0;
        
        for(int i=0;i<horizontalCuts.size()-1;i++){
            if(maxh<(horizontalCuts[i+1]-horizontalCuts[i])){
                maxh = (horizontalCuts[i+1]-horizontalCuts[i])%1000000007;
            }
        }
        
         for(int i=0;i<verticalCuts.size()-1;i++){
            if(maxw<(verticalCuts[i+1]-verticalCuts[i])){
                maxw = (verticalCuts[i+1]-verticalCuts[i])%1000000007;
            }
        }
        
        // cout<<maxh<<endl;
        // cout<<maxw<<endl;
        
        return (maxh*maxw)%1000000007;
    }
};