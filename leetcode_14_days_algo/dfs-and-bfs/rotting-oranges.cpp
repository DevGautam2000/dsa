#include "io/io.h"
typedef vector<vector<int>> vvi;

class Solution {
    enum Direction{ up=-1 , down=1, inplace=0};
    enum Orange{fresh=1, rottten=2};
    vector<Direction> dirs = {inplace, up, inplace, down, inplace};

public:
    int orangesRotting(vector<vector<int>>& grid) {

    	//* TC: O(m*n), SC: O(m*n)

        int m=grid.size();
        int n=grid[0].size();
        int fresh=0;
        

        queue<tuple<int,int,int>> q;
        
        for(int row=0; row<m; row++)
            for(int col=0; col<n; col++)
                if(grid[row][col]==Orange::rottten) q.push({0,row, col});
                else if(grid[row][col]== Orange::fresh) fresh++;


        int ans=0;
        while(q.size()){

        	auto [time, r, c] = q.front(); q.pop();
        	for (int i = 0; i < 4; ++i) { 
                int nr = r + dirs[i], nc = c + dirs[i+1];

                if (nr < 0 or nr == m or 
                	nc < 0 or nc == n or 
                	grid[nr][nc] == 0 or 
                	grid[nr][nc] == 2) continue;
                
                grid[nr][nc] = Orange::rottten;
            	ans = time+1;
            	fresh--;
                q.push({time+1,nr, nc});
            }
        }

        if(fresh>0) return -1;
            
       return ans;    
    }  
} s;


int main(){
    io();
    vvi mat = {{2,1,1},{0,1,1},{1,1,0}};
    cout << " Solution: " <<  s.orangesRotting(mat) << endl;
    return 0;
}

