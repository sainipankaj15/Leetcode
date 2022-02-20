class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        
        int even=0;
        int odd=0;
        int minboth=0;
        for(int i=0;i<position.size();i++){
            if(position[i]%2){
                odd++;
            }
            else{
                even++;
            }
        }
        
        
        minboth = min(odd,even);
        return minboth;
    }
};