#include "io/io.h"
typedef vector<vector<int>> vvi;

class Solution {
    typedef vector<vector<int>> vvi;
    enum Direction{ up=-1 , down=1, inplace=0};
    vector<Direction> dirs = {inplace, up, inplace, down, inplace};

public:
    vvi updateMatrix(vvi& mat) {
        
        //* TC: O(m*n), SC: O(m*n)

    	queue<pair<int,int>> q;
    	int m = mat.size();
    	int n= mat[0].size();

        for(int row=0 ; row<m; row++)
            for(int col=0; col<n; col++)
                if(mat[row][col] == 0) q.emplace(row,col);
            	else mat[row][col] = -1; //mark as not processed


        while(q.size()){

        	auto [ r , c ] = q.front(); q.pop(); //decompose variable
        	for (int i = 0; i < 4; ++i) { // i till 4 as possible movements in 4 directions
                int nr = r + dirs[i], nc = c + dirs[i+1];

                if (nr < 0 or nr == m or 
                	nc < 0 or nc == n or 
                	mat[nr][nc] != -1) continue;
                
                mat[nr][nc] = mat[r][c] + 1;
                q.emplace(nr, nc);
            }
        }

        return mat;
    }
    
    
}s;

int main(){
    io();
    cout << " Solution: " << endl;
    vvi mat = {{0,0,0},{0,1,0},{1,1,1}};

    auto res = s.updateMatrix(mat);
    console::display(res);

    //TODO : dp approach of this question 

    return 0;
}

