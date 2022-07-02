class Solution {
public:
    bool isBoomerang(vector<vector<int>>& points) {
        
        int x = points[0][0]*(points[1][1]-points[2][1]) + points[1][0]*(points[2][1]-points[0][1]) + points[2][0]*(points[0][1]-points[1][1]);
        
        if(x==0) // it means triangle area is zero and they are in straight line
        return 0 ; 
        
        //otherwise
        return 1;
        
    }
};

// my explaination is 
// https://leetcode.com/problems/valid-boomerang/discuss/2226129/c-simple-explanation-2-different-approaches-simple-math-why-slope-is-not-working