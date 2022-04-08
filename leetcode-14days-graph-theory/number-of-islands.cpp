#include "io/io.h"

class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        
    function<bool (int,int)> explore = [&](int r,int c){
      
        //check error for boundary
        bool isRowInBound = 0<=r and r<m;
        bool isColInBound = 0<=c and c<n;
        
        if(!isRowInBound or !isColInBound)
            return false;
        
        //check if water
        if(grid[r][c] == '0')
            return false;
        grid[r][c]='0';
        
        
        explore(r-1,c); //top
        explore(r+1,c); //down
        explore(r,c-1); //left
        explore(r,c+1); //right
        
        return true;
    };
        
        int countOfIslands=0;
        for(int row=0; row<m; row++)
            for(int col=0; col<n; col++)
                if(grid[row][col] == '1' and explore(row,col))
                    countOfIslands++;
        
        
        return countOfIslands;
    }
} s;

int main(){
    io();
   vector<vector<char>> grid = 
   {{'1','1','1','1','0'},
    {'1','1','0','1','0'},
    {'1','1','0','0','0'},
    {'0','0','0','0','0'}
   };
   
   cout << " Solution: " << endl;
   auto res = s.numIslands(grid);
   console::display(res);

    return 0;
}

