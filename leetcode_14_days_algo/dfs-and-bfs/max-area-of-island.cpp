#include "io/io.h"

typedef vector<vector<int>> vvi;

class Solution {
    typedef vector<vector<int>> vvi;
public:
    int maxAreaOfIsland(vvi& grid) {
            
        int count=0;
        for(int row=0; row<grid.size(); row++)
            for(int col=0; col<grid[0].size(); col++)
                if(grid[row][col])
                    count = max(count,explore(grid, row, col));
        
        return count;
    }
    
    int explore(vvi &grid,int r,int c){
        
        //bound check
        bool rInBound = 0<=r and r<grid.size();
        bool cInBound = 0<=c and c<grid[0].size();
        
        if(!rInBound or !cInBound) return 0;
        
        //if water
        if(grid[r][c] == 0) return 0;
        grid[r][c]=0;
        
        int size=1;
        // explore all directions
        size += explore(grid,r-1,c); // --top
        size += explore(grid,r+1,c); // --bottom
        size += explore(grid,r,c-1); // --left
        size += explore(grid,r,c+1); // --right
        
        return size;
    }  
} s;

int main(){
    io();
    vvi grid  = {
        {1,1,1,1,0},
        {1,1,0,1,0},
        {1,1,0,0,0},
        {0,0,0,0,0}
    };

    cout << " Solution: " << s.maxAreaOfIsland(grid);

    return 0;
}

