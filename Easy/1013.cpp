//Greddy solution 
class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        
        long long int total = accumulate(arr.begin(),arr.end(),0);
        
        long long int eachpartsum = total/3;
        if(total%3==0)        {
             int part = 3;
        long long int sum=0;
        // cout<<total<<endl;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
            if(sum==eachpartsum){
                part--;
                sum = 0;
            }
        }
        if(part<=0)
            return 1;
        }
        return 0;
        
    }
};