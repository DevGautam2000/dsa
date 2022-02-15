#include "io/io.h"

class Solution{

	set<string> visited;
public:

 int minIslandCount(vector<vector<char>> grid){
 	 //? r = #rows : c = #cols 
     //* TC: O(rc), SC: O(rc) 

 	int count=INT_MAX;
    int isIsland=0;
 	for(int row=0; row<grid.size(); row++)
 		for(int col=0; col<grid[0].size(); col++)
 				isIsland=explore(grid, row, col), count=min(count,isIsland ? isIsland : count);

 	return count;
 }   

 int explore(vector<vector<char>> grid , int r , int c){

 	//! bound check
 	bool rowInBounds = 0 <= r and r < grid.size(); 
 	bool colInBounds = 0 <= c and c < grid[0].size(); 

 	if(!rowInBounds or !colInBounds) return 0;

 	//if not land
 	if(grid[r][c] == 'W') return 0;

 	string pos = to_string(r)+","+to_string(c);
 	//cycle check
 	if(visited.count(pos)) return 0;
 	visited.insert(pos);

    int size=1;

 	//traverse all directions
 	size += explore(grid, r-1,c);
 	size += explore(grid, r+1,c);
 	size += explore(grid, r,c-1);
 	size += explore(grid, r,c+1);

 	return size;

 }
} s;

int main(){
    io();
    cout << " Solution: " <<  endl;
    vector<vector<char>> grid ={
    	{'W','L','W','L','W'},
    	{'L','L','W','L','W'},
    	{'W','L','W','W','W'},
    	{'W','W','W','L','L'},
    	{'L','W','W','L','L'},
    	{'L','L','W','W','W'},
    };

    cout<< s.minIslandCount(grid);

    return 0;
}

