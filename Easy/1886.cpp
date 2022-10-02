class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        // we can do  max 4 rotation bcoz in fifth rotation we will come at first
        
        
        int a = 4;
        
        while(a--){
            if(mat==target)
                return 1;
            
            for(int i=0;i<mat.size();i++){
                for(int j=i;j<mat[i].size();j++){
                    swap(mat[i][j],mat[j][i]);
                }
            }
            
            for(int i=0;i<mat.size();i++){
                reverse(mat[i].begin(),mat[i].end());
            }
            // here one rotation done 
        }
        
        
        // if not then it is not possible
        return 0;
        
    }
};