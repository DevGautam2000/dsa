#include "io/io.h"

class Solution
{
public:
    bool isValidSudoku(vector<vector<char>> &board)
    {
        //? let k = 9*9=81
        //? log(base 2)  2^31 = 31*2.6 = 81 approx.
        //? k= log(base 2)n
        //*TC: O(k), SC: O(k)
        unordered_set<string> set;
        for (int i = 0; i < 9; i++)
            for (int j = 0; j < 9; j++)
            {
                char current = board[i][j];
                if (current == '.')
                    continue;
                if (!set.emplace(to_string(current) + " at row " + to_string(i)).second ||
                    !set.emplace(to_string(current) + " at col " + to_string(j)).second ||
                    !set.emplace(to_string(current) + " at box " + to_string(i / 3 * 3 + j / 3)).second)
                    return false;
            }

        return true;
    }
    bool isValidSudokuAsciiSolution(vector<vector<char>> &board)
    {

        //? let k = 9*9=81
        //? log(base 2)  2^31 = 31
        //? and 31*2.6 = 81 approx.
        //? k= 2.6log(base 2)2^31
        //? neglecting constants k = log(n)
        //*TC: O(k), SC: O(k)
        int rows[9][9] = {0};
        int cols[9][9] = {0};
        int boxes[9][9] = {0};

        for (int i = 0; i < 9; i++)
            for (int j = 0; j < 9; j++)
            {
                int k = i / 3 * 3 + j / 3;
                char current = board[i][j];
                if (current == '.')
                    continue;
                if (rows[i][current - '0' - 1]++ ||
                    cols[j][current - '0' - 1]++ ||
                    boxes[k][current - '0' - 1]++)
                    return false;
            }

        return true;
    }

} s;

int main()
{
    io();
    vector<vector<char>> board = {{'5', '3', '.', '.', '7', '.', '.', '.', '.'}, {'6', '.', '.', '1', '9', '5', '.', '.', '.'}, {'.', '9', '8', '.', '.', '.', '.', '6', '.'}, {'8', '.', '.', '.', '6', '.', '.', '.', '3'}, {'4', '.', '.', '8', '.', '3', '.', '.', '1'}, {'7', '.', '.', '.', '2', '.', '.', '.', '6'}, {'.', '6', '.', '.', '.', '.', '2', '8', '.'}, {'.', '.', '.', '4', '1', '9', '.', '.', '5'}, {'.', '.', '.', '.', '8', '.', '.', '7', '9'}};

    cout << "Solution: " << s.isValidSudoku(board) << endl;
    cout << "Ascii Solution: " << s.isValidSudokuAsciiSolution(board) << endl;

    return 0;
}
