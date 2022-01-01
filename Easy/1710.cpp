
bool pankaj(vector<int> v1,vector<int> v2){
    
    if(v1[1]>=v2[1])
        return true;
    return false;
    
}
class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        
        sort(boxTypes.begin(),boxTypes.end(),pankaj);
        
        int ans=0;
        
        for(int i=0;i<boxTypes.size();i++){
            if(truckSize>=boxTypes[i][0]){
                ans+=boxTypes[i][0]*boxTypes[i][1];
                truckSize-=boxTypes[i][0];
            }
            else{
                ans+=truckSize*boxTypes[i][1];
                break;
            }
        }
        
        return ans;
        
    }
};
// this solution take times 
// but when i just change the paramneter means in comprater when i passing values instead of passing values i passed reference
// run time reduced by 40 time 

// it is unbelivble solution



bool pankaj(vector<int> &v1,vector<int> &v2){
    
    if(v1[1]>=v2[1])
        return true;
    return false;
    
}
class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        
        sort(boxTypes.begin(),boxTypes.end(),pankaj);
        
        int ans=0;
        
        for(int i=0;i<boxTypes.size();i++){
            if(truckSize>=boxTypes[i][0]){
                ans+=boxTypes[i][0]*boxTypes[i][1];
                truckSize-=boxTypes[i][0];
            }
            else{
                ans+=truckSize*boxTypes[i][1];
                break;
            }
        }
        
        return ans;
        
    }
};