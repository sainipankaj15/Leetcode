class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        // firstly i think to genrate a whole vector of those row 
        vector<vector<int>> a(31); // we have max numRows = 30;
        
        // filled first row manually
        a[0].push_back(1);
        

        // filled second row manually 
        a[1].push_back(1);
        a[1].push_back(1);
        
        
        
        // now we will fill remaining rows using for loop 
        for(int i=2;i<31;i++){
            
            // we know first element of every row is 1
            a[i].push_back(1);
            
            
            
            // mid elements from index 1 to index n-2 
            int loopcount=i-1;
            while(loopcount--){
                a[i].push_back(a[i-1][a[i].size()]+a[i-1][a[i].size()-1]);
            }
            
            
            
            // we know last element of every row is 1;
            a[i].push_back(1);
        }
        
        // till now we have genrated all row in a 
        // now we will push rows in a vector accordingly the question
        
         vector<vector<int>> b;
        
        for(int i=0;i<numRows;i++){
            b.push_back(a[i]);
        }
        
        // b which is vector of vector our final answer
        return b;
        
      
    }
};

// above is chapri method 
// below one is standrad method

class Solution {
    public:
    void pascal (int n , vector<vector<int>> &v){
        if(n==1){
            v[n-1].push_back(1);
            return ;
        }
        pascal(n-1,v);
        
        for(int i=0;i<n;i++){
            if(i==0 || i==n-1){
                v[n-1].push_back(1);
            }
            else{
                v[n-1].push_back(v[n-2][i]+v[n-2][i-1]);
            }
        }
        return ;
    }
    
public:
    vector<vector<int>> generate(int numRows) {
        
        vector<vector<int>> ans(numRows);
        
        pascal(numRows, ans);
        
        
        return ans;
    }
};