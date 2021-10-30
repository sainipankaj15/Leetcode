// this solution works
class Solution {
public:
    int fib(int n) {
        int a[n+1];
        if(n>1)
        {
              a[0] = 0;
        a[1] = 1;
        for(int i=2;i<=n;i++)
            a[i] = a[i-2]+a[i-1];
        return a[n];
        }
        else if(n==0)
            return 0;
        else
            return 1;
    }
};




// but this soultion doest not work
class Solution {
public:
    int fib(int n) {
        int a[n+1];
        if(n>1)
        {
              a[0] = 0;
        a[1] = 1;
        for(int i=2;i<=n;i++)
            a[i] = a[i-2]+a[i-1];
        return a[n];
        }
        else if(n==0)
            return 0;
        else if(n==1)
            return 1;
    }
};



// see the difference 
// line no 39 and 16

// learning point 
// you have to return always something 