#include "io/io.h"

typedef vector<vector<int>> vvi;

class Solution {
    int rows;
    int cols;
    int source;
    
    typedef vector<vector<int>> vvi;
public:
    
    void explore(vvi& image, int sr, int sc, int nc) {
    
        //check boundary
        if(sr >= rows || sr<0 || sc<0 || sc >= cols) return;
        if(image[sr][sc] != source) return;
        
        image[sr][sc] = nc;
        
        //explore all four directions
        explore(image,sr-1,sc, nc); // -- top
        explore(image,sr+1,sc, nc); // -- down
        explore(image,sr,sc-1, nc); // -- left
        explore(image,sr,sc+1, nc); // -- right
        
    }
    
    vvi floodFill(vvi& image, int sr, int sc, int newColor) {
     
     //* TC: O(m*n), SC: O(1)
        if(image[sr][sc] == newColor)
            return image;
        
        rows = image.size();
        cols = image[0].size();
        source = image[sr][sc];
        
        //explore
        explore(image,sr,sc,newColor);
        
        return image;
    }
      
} s;

int main(){
    io();
    cout << " Solution: " << endl;
    vvi image = {{1,1,1},{1,1,0},{1,0,1}};
    int sr = 1, sc = 1, newColor = 2;

    auto res = s.floodFill(image,sr,sc,newColor);
    console::display(res);

    return 0;
}

