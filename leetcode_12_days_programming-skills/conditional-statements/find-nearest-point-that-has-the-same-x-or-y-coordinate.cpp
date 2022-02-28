#include "io/io.h"

class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        //* TC: O(n), SC: O(1)
        
        int mn=INT_MAX;
        int index=-1;
        int i=0;
        int manhattan_d;
        
        for(auto co: points ){
            
            if(co[0]==x or co[1]==y){
                manhattan_d =  abs(x - co[0]) + abs(y - co[1]);
                if(manhattan_d < mn )
                mn = manhattan_d, index=i;
            }
            i++;
        }
        
        return index;
    }
}s;

int main(){
    io();
    int x=3,y=4;
    vector<vector<int>> points ={{1,2},{3,1},{2,4},{2,3},{4,4}};
    cout << " Solution: " << s.nearestValidPoint(x,y,points)  << endl;

    return 0;
}

