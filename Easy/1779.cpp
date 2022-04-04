class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int ans = -1;
        int distance = INT_MAX;
        int currentdistance=0;
        
        for(int i=0;i<points.size();i++){
            if(points[i][0]==x || points[i][1]==y){
                currentdistance = abs(points[i][0]-x)+abs(points[i][1]-y);
                if(currentdistance<distance){
                    distance = currentdistance;
                    ans = i;
                }
            }
        }
        
        
        
        return ans;
    }
};