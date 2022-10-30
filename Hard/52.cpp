class Solution
{
    bool isSafe(int row, int column, vector<string> board, int n)
    {

        int dummyrow = row;
        int dummycol = column;

        while (dummycol >= 0 && dummyrow >= 0)
        {
            if (board[dummyrow][dummycol] == 'Q')
                return false;
            dummycol--;
            dummyrow--;
        }

        dummycol = column;

        while (dummycol >= 0)
        {
            if (board[row][dummycol] == 'Q')
                return false;
            dummycol--;
        }

        dummyrow = row;
        dummycol = column;

        while (dummycol >= 0 && dummyrow < n)
        {
            if (board[dummyrow][dummycol] == 'Q')
                return false;
            dummycol--;
            dummyrow++;
        }

        // yadi last tak false return nahi hua it means wo safe h
        return true;
    }

    void solve(vector<vector<string>> &ans, vector<string> board, string s, int start, int n)
    {
        if (start == board.size())
        {
            ans.push_back(board);
            return;
        }

        // i represent row
        for (int i = 0; i < n; i++)
        {
            if (isSafe(i, start, board, n))
            {
                board[i][start] = 'Q';
                solve(ans, board, s, start + 1, n);
                board[i][start] = '.';
            }
        }
    }

public:
    vector<vector<string>> solveNQueens(int n)
    {
        vector<vector<string>> ans;
        vector<string> board(n);
        string s(n, '.');
        for (int i = 0; i < board.size(); i++)
        {
            board[i] = s;
        }
        int start = 0;
        // here start show column
        solve(ans, board, s, start, n);
        return ans.size();
    }
};

// actually there is no need to store the answer means their postions 
// normaly we can store a variable and update them see my belwo solution
class Solution {

     bool isSafe(int row, int column, vector<string> board, int n){
         int dummyrow = row;
         int dummycol = column;

         while(dummycol>=0 && dummyrow>=0){
             if(board[dummyrow][dummycol]=='Q')
             return false;
             dummycol--;
             dummyrow--;
         }

         dummycol  = column;

         while(dummycol>=0){
             if(board[row][dummycol]=='Q')
             return false;
             dummycol--;
         }

         dummyrow = row;
         dummycol = column;

        while(dummycol>=0 && dummyrow<n){
             if(board[dummyrow][dummycol]=='Q')
             return false;
             dummycol--;
             dummyrow++;
         }

         // yadi last tak false return nahi hua it means wo safe h 
         return true;
     }

    void solve(int &ans, vector<string> board, string s , int start,int n){
        if(start==board.size()){
            ans++;
            return ;
        }

        // i represent row
       for(int i = 0; i < n;i++){
            if(isSafe(i,start,board,n)){
                board[i][start] = 'Q';
                solve(ans,board,s,start+1,n);
                board[i][start] = '.';
            }
       }
   

    }


public:
    int totalNQueens(int n) {
        int ans=0;
        vector<string> board(n);
        string s(n,'.');
        for(int i=0;i<board.size();i++)
        {
          board[i] = s;
        }
        int start=0;
        // here start show column 
        solve(ans,board,s,start,n);
        return ans;
    }
};