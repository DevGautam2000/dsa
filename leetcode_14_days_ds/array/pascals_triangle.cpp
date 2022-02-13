#include "io/io.h"

class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    { //*TC: O(n2), SC: O(n2)
        vector<vector<int>> res(numRows);

        int counter = 1;
        for (int i = 0; i < numRows; i++)
        {
            vector<int> cols(counter);
            res[i] = cols;
            for (int j = 0; j < counter; j++)
                if (j == 0 || j == counter - 1)
                    res[i][0] = res[i][counter - 1] = 1;

                else
                    res[i][j] = res[i - 1][j - 1] + res[i - 1][j];

            /*eg is res[3][1] that should be 3 
            so, res[2][0] i.e, 1 and res[2][1] i.e., 2 = 3
            similarly for others
            */

            counter++;
        }
        return res;
    }

} s;

int main()
{

    io();
    int numRows;
    cin >> numRows;
    cout << " Solution: " << endl;
    auto res = s.generate(numRows);

    for (auto i : res)
    {
        for (auto j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}
