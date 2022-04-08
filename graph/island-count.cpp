#include "io/io.h"

class Solution{

	set<string> visited;
public:

 int islandCount(vector<vector<char>> grid){
 	 //? r = #rows : c = #cols 
     //* TC: O(rc), SC: O(rc) 

 	int count=0;
 	for(int row=0; row<grid.size(); row++)
 		for(int col=0; col<grid[0].size(); col++)
 			if(explore(grid, row, col))
 				count++;

 	return count;
 }   

 bool explore(vector<vector<char>> grid , int r , int c){

 	//! bound check
 	bool rowInBounds = 0 <= r and r < grid.size(); 
 	bool colInBounds = 0 <= c and c < grid[0].size(); 

 	if(!rowInBounds or !colInBounds) return false;

 	//if not land
 	if(grid[r][c] == 'W') return false;

 	string pos = to_string(r)+","+to_string(c);
 	//cycle check
 	if(visited.count(pos)) return false;
 	visited.insert(pos);


 	//traverse all directions
 	explore(grid, r-1,c);
 	explore(grid, r+1,c);
 	explore(grid, r,c-1);
 	explore(grid, r,c+1);



 	return true;

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

    auto res =  s.islandCount(grid);el;

    cline(res);

    return 0;
}

