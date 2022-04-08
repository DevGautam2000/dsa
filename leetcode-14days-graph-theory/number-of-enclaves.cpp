#include "io/io.h"

class Solution{
public:

 int numEnclaves(vector<vector<int>>& grid) {
        
        //* TC:O(rows*cols) SC:O(rows*cols)
        
        int countOfLandCells=0;
        int rows = grid.size();
        int cols = grid[0].size();
        
        function<void (int,int)> explore = [&](int r,int c){
            
            bool isRowInBound = 0<=r and r<rows;
            bool isColInBound = 0<=c and c<cols;
            
            if(!isRowInBound or !isColInBound or !grid[r][c])
                return;
            
            grid[r][c]=0;
            
            explore(r-1,c);
            explore(r+1,c);
            explore(r,c-1);
            explore(r,c+1);
            
        };
        
        
        //for left and right boundaries
        // Oth and cols-1 cols
         for(int r=0; r<rows; r++){
             if(grid[r][0]) explore(r,0);
             if(grid[r][cols-1]) explore(r,cols-1);
         }
        
        //for top and bottom boundaries
        // Oth and rows-1 rows
         for(int c=0; c<cols; c++){
             if(grid[0][c]) explore(0,c);
             if(grid[rows-1][c]) explore(rows-1,c);
         }
            
        for(int r=0; r<rows; r++)
            for(int c=0; c<cols; c++)
                if(grid[r][c])
                    countOfLandCells++;
        
        
        return countOfLandCells;
    }
} s;

int main(){
    io();

    vector<vector<int>> grid = {{0,0,0,0},{1,0,1,0},{0,1,1,0},{0,0,0,0}};
    cout << " Solution: " << s.numEnclaves(grid) << endl;

    return 0;
}

