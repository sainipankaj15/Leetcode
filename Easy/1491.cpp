class Solution {
public:
    double average(vector<int>& salary) {
        
        int minvalue = INT_MAX;
        int maxvalue = INT_MIN;
        int sum=0;
        for(auto it : salary){
            sum+=it;
            minvalue = min(minvalue,it);
            maxvalue = max(maxvalue,it);
        }
        sum = sum - minvalue;
        sum = sum - maxvalue;
        
        ///if we want to finish there we can write below line
         // return sum/((salary.size()-2)*1.0);
        
        double sum1 = sum;
       
        double ans = sum1/(salary.size()-2);
        cout<<ans;
        return ans;
    }
};