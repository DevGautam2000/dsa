#include "io/io.h"

class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        //*TC: O(n), SC: O(1)
        int index = 0;
        int n = matrix[0].size();

        //? using loop check if number is in matrix
        for (int i = 0; i < matrix.size(); i++)
            if (target >= matrix[i][0] && target <= matrix[i][n - 1])
            {
                index = i;
                break;
            }

        //? find the target only in given sub array
        for (int j = 0; j < n; j++)
            if (target == matrix[index][j])
                return true;

        return false;
    }
} s;

int main()
{

    io();
    vector<vector<int>> mat = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
    int target = 13;
    cout << " Solution: " << s.searchMatrix(mat, target) << endl;

    return 0;
}
