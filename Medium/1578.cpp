class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int rem=0, sum=0;
      for(auto i = 0 ;  i <colors.size()-1;i++){
          if(colors[i]==colors[i+1]){
              rem = min(neededTime[i],neededTime[i+1]);
              sum+=rem;
              if(neededTime[i]>neededTime[i+1])
              swap(neededTime[i],neededTime[i+1]);
          }
      }
      return sum;
    }
};