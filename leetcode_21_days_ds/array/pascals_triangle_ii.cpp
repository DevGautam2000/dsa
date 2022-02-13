#include "io/io.h"

class Solution
{
public:
    vector<int> getRow(int rowIndex)
    {
        vector<vector<int>> res(rowIndex + 1);

        int counter = 1;
        for (int i = 0; i < rowIndex + 1; i++)
        {
            vector<int> cols(counter);
            res[i] = cols;
            for (int j = 0; j < counter; j++)
                if (j == 0 || j == counter - 1)
                    res[i][0] = res[i][counter - 1] = 1;

                else
                    res[i][j] = res[i - 1][j - 1] + res[i - 1][j];

            counter++;
        }

        return res[rowIndex];
    }
} s;

int main()
{
    io();
    cout << " Solution: ";
    display(s.getRow(4));

    return 0;
}
