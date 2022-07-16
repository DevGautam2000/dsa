#include "io/io.h"

class Solution{

	unordered_set<string> vis;
public:



 void ratInMaze(vector<vector<int>> maze){
     //* TC: O(e), SC: O(n)

	function<void (int,int,string)> findPath = [&](int r, int c, string path){
		
		int m = maze.size();
		int n = maze[0].size();

		if(r ==  m-1 and c == n-1){
			if(maze[r][c] == 0) {
				cout<<"No such path in the given maze\n";
				return; }
			cout<<path<<endl;
			return;
		}

		bool rowInBounds = 0 <= r and r < m;
		bool colInBounds = 0 <= c and c < n;

		if(!rowInBounds or !colInBounds ) return;
		if(maze[r][c] == 0) return;

		//mark as visited
		string val = "Row "+to_string(r)+" Col "+to_string(c);

		if(vis.count(val)) return;
		vis.insert(val);
		
		findPath(r+1,c,path+"D");
		findPath(r,c-1,path+"L");
		findPath(r,c+1,path+"R");
		findPath(r-1,c,path+"U");

		vis.erase(val);
	};

	

	findPath(0,0,"");

	
 }   
} s;


int main(){
    io();

    vector<vector<int>> maze = {
    	{1,0,0,0},
    	{1,1,0,1},
    	{1,1,0,0},
    	{0,1,1,1}
    };
    vector<vector<int>> maze2 = {
    	{1,0},
    	{1,0}
    };

    cout << "Solution: "  << endl;
    cout<<"maze: "<<endl;s.ratInMaze(maze);el;
	cout<<"maze2: "<<endl;s.ratInMaze(maze2);


    return 0;
}

