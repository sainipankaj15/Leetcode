// recursion ka question h
class Solution
{

    bool solve(vector<vector<char>> &board)
    {

        for (int i = 0; i < board.size(); i++)
        {
            for (int j = 0; j < board[0].size(); j++)
            {
                if (board[i][j] == '.')
                {
                    for (char k = '1'; k <= '9'; k++)
                    {
                        if (isVaild(i, j, board, k))
                        {
                            board[i][j] = k;

                            if (solve(board) == true)
                                return true;
                            else
                                board[i][j] = '.';
                        }
                    }
                    // if he dont go in the if. It means all are not valid  1 2 3 4 5.5 till 9 all are invalid
                    return false;
                }
            }
        }
        return true;
    }

    bool isVaild(int row, int column, vector<vector<char>> board, char k)
    {

        // first we will check column
        for (int i = 0; i < 9; i++)
        {
            if (board[row][i] == k)
                return false;

            if (board[i][column] == k)
                return false;
        }

        // second we will check row wise

        // Now we will check last 3*3 segement
        // for finding first element of that segement we can divide by 3

        int segementFirstRow = row / 3; // let say row = 5 hua tho
        // segementFirstRow mai 1 jaayaga and 3 se multiple hokar wo 3 ho jayaga means first wale par aa jayaga
        segementFirstRow = 3 * segementFirstRow;

        int segementFirstColumn = column / 3;
        segementFirstColumn = 3 * segementFirstColumn;

        for (int i = segementFirstRow; i < segementFirstRow + 3; i++)
        {
            for (int j = segementFirstColumn; j < segementFirstColumn + 3; j++)
            {
                if (board[i][j] == k)
                    return false;
            }
        }

        // till now kuch nahi hua tho it means wo valid poistion h
        return true;
    }

public:
    void solveSudoku(vector<vector<char>> &board)
    {
        solve(board);
    }
};