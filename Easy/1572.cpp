class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        
        int ans=0;
        int matrixsize =  mat.size();
        int comman=0;
        for(int i=0;i<matrixsize;i++){
            for(int j=0;j<matrixsize;j++){
                if(i+j+1==matrixsize)
                    ans+=mat[i][j];
                
                if(i==j)
                ans+=mat[i][j];  
                
                if(i==j && i+j+1==matrixsize)
                    comman+=mat[i][j];
            }
        }
        ans =  ans-comman;
        return ans;
    }
};
//  this work in O(n^2);

// here is another code which worn in O(n)
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        
        int ans=0;
        int pdsum=0,sdsum=0;
        int matrixsize =  mat.size();
       
        for(int i=0;i<matrixsize;i++){
            pdsum+=mat[i][i];
            sdsum+=mat[i][matrixsize-i-1];
        }
        ans = pdsum+sdsum;
        if(matrixsize%2)
            ans = ans - mat[matrixsize/2][matrixsize/2];
        return ans;
    }
};

// bascialy if matrix size is odd then middle element addes twice otherwise in even case no changes