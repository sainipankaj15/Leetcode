class Solution {
public:
    
    // number of trips for a given time
    long long getans(vector<int>& time,int t,long long int tim){
        long long cnt=0;
        for(int i=0;i<time.size();i++)
        {
            cnt+=(tim)/time[i];
            if(cnt>=t)
                return cnt;
        }
        return cnt;
    }
    
    
    long long minimumTime(vector<int>& time,int t) {
        // sort(time.begin(),time.end());
        long long  mx=*max_element(time.begin(),time.end());
        long long  r=(long long)mx*t;
        long long l=1;
        long long  ans;
        while(l<=r)
        {
            long long  mid=(l+r)/2;
            if(getans(time,t,mid)>=t)
            {
                r=mid-1;
            }
          
            else
                l=mid+1;
        }
        return r+1;
    }
};