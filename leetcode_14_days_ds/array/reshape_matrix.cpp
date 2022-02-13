#include "io/io.h"

class Solution
{
public:
    vector<vector<int>> matrixReshape(vector<vector<int>> &mat, int r, int c)
    {

        //*TC: O(n2), SC: O(n2)

        int rows = mat.size();
        int cols = mat[0].size();

        //! if dimension do nnot match we cannot reshape the matrix
        if ((rows * cols) != (r * c))
            return mat;

        int newrow = 0;
        int newcol = 0;
        vector<vector<int>> res(r, vector<int>(c));

        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                res[newrow][newcol++] = mat[i][j];
                if (newcol == c)
                {
                    newcol = 0;
                    newrow++;
                }
            }
        }

        return res;
    }

} s;

int main()
{

    io();

    vector<vector<int>> mat = {{1, 2}, {3, 4}};
    int r = 1, c = 4;

    cout << " Solution: " << endl;
    auto res = s.matrixReshape(mat, r, c);

    cout << res.size() << res[0].size() << endl;
    for (auto i : res)
    {
        for (auto j : i)
        {
            cout << j << endl;
        }
    }

    return 0;
}
