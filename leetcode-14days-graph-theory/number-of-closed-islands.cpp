#include "io/io.h"
class Solution {
public:
    int closedIsland(vector<vector<int>>& grid) {

        int m=grid.size();
        int n=grid[0].size();
        
    function<bool (int,int)> explore = [&](int r,int c){
      
        //check error for boundary
        bool isRowInBound = 0<=r and r<m;
        bool isColInBound = 0<=c and c<n;
        
        if(!isRowInBound or !isColInBound)
            return false;
        
        //check if land
        if(grid[r][c] == 1)
            return true;
        grid[r][c]=1;
        
        auto top = explore(r-1,c); //top
        auto down = explore(r+1,c); //down
        auto left = explore(r,c-1); //left
        auto right = explore(r,c+1); //right
        
        return top and down and left and right;
    };
        
        int countOfClosedIslands=0;
        for(int row=0; row<m; row++)
            for(int col=0; col<n; col++)
                if(grid[row][col] == 0)
                    countOfClosedIslands += explore(row,col) ? 1 : 0;
        
        
        return countOfClosedIslands;
    }
}s;

int main(){
    io();
    vector<vector<int>> grid = 
       {{1,1,1,1,1,1,1,0},
    	{1,0,0,0,0,1,1,0},
    	{1,0,1,0,1,1,1,0},
    	{1,0,0,0,0,1,0,1},
    	{1,1,1,1,1,1,1,0}};

    cout << " Solution: " <<  s.closedIsland(grid) << endl;

    return 0;
}

