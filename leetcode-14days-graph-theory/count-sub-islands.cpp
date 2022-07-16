#include "io/io.h"

class Solution{
public:

 int countSubIslands(vector<vector<int>> grid1, vector<vector<int>> grid2 ) {

    int rows = grid1.size();
    int cols = grid1[0].size();

     function<bool (int,int)> explore = [&](int r , int c){
                bool rowInBounds = 0 <= r and r < rows;
 				bool colInBounds = 0 <= c and c < cols;

                if (!rowInBounds or !colInBounds or grid2[r][c] == 0)
                    return false;

                grid2[r][c] = 0;

                explore(r - 1, c);
                explore(r + 1, c);
                explore(r, c - 1);
                explore(r, c + 1);

                return true;
            };

            // * removing non-common sub islands
            for (int r=0; r<rows; r++)
                for (int c=0; c<cols; c++)
                    if (grid2[r][c] && !grid1[r][c])
                        explore(r, c);

            // * simultaneous dfs for both grids
            int count = 0; //count of sub islands
             for (int r=0; r<rows; r++)
                for (int c=0; c<cols; c++)
                    if (grid2[r][c]  and explore(r, c))
                        count++;

            return count;
        }
} s;

int main(){
    io();
    vector<vector<int>> grid1 =
    {{1, 1, 1, 0, 0},
    {0, 1, 1, 1, 1},
    {0, 0, 0, 0, 0},
    {1, 0, 0, 0, 0},
    {1, 1, 0, 1, 1}};

    vector<vector<int>> grid2 =
    {{1, 1, 1, 0, 0},
    {0, 0, 1, 1, 1},
    {0, 1, 0, 0, 0},
    {1, 0, 1, 1, 0},
    {0, 1, 0, 1, 0}};

    cout << " Solution: " << s.countSubIslands(grid1,grid2) << endl;

    return 0;
}

