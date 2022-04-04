class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        for(int i=0;i<matrix.size();++i){
            for(int j=0;j<matrix[i].size();j++){
                if(matrix[i][j]==target)
                    return 1;
            }
        }
        
        return 0;
        
    }
};
/// above solution is mine but it is not efficent 
// You will surprised when u will know that u can convert a matrix into array and vice versa also a true

// so below solution i came from discussion section
// brillaint solution h
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        

        
        int n = matrix.size();
        int m = matrix[0].size();
        
        int start = 0;
        int end = n*m-1;
        
        while(start<=end)
        {
            
            // actually logic is we are going to binary search on this matrix 
            // and here we assume it as a array means hum matrix ko array k tarah treat kargee
            int mid = start + (end-start)/2;
         
           int element = matrix[mid/m][mid%m];

           if(element==target)
           return 1;
           else if(element>target) //yadi element target se jaayda ho gaya tho hum first half mai aayage 
           end = mid-1;
           else
           start = mid+1; // otherwise second half mai aayage

        }
        
        
        // if we dont get any element which is equal to target
        return 0;
        
    }
};
