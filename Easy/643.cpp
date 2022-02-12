// This is the question of sliding window
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        
        // My logic is 
//  firstly we will find which has maxmimum sum in uper side bcoz in lower side is constant for all
        //  and who have maximum sum we will find this starting poistion of this sliding window 
        
        
     
        int i=0,j=0;
        int poisI=0;
        int maxnow=-100000000; // minumum bcoz number can be negative 
        int sum=0;
        while(j<nums.size()){
            sum+=nums[j];
            if(j-i+1<k)
                j++;
            else if(j-i+1==k){
                maxnow = max(maxnow,sum);
                sum =  sum-nums[i];
                i++; 
                j++;
                // cout<<"Hello"<<endl;
            }
        }
        
        // till now we have got maximum sum with the loction of stating poisiton of sliding window
        
       // we have maxmimum sum in maxnow but to be attetion this is in int so we will change it in double
        
        
        double ans=0;
        double maxxnow = maxnow;
        ans = maxxnow/k; // take average
        
        setprecision(6); // this is stl function by which we set five numbers after decicaml
        // for more this you can refer this link
        // https://www.geeksforgeeks.org/iomanip-setprecision-function-in-c-with-examples/
        
        return ans;
        
        
        
        
    }
};