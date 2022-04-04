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