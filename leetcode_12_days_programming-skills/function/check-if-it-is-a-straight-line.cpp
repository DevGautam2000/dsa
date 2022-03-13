#include "io/io.h"

class Solution{
public:

 bool checkStraightLine(vector<vector<int>>& coordinates) {
        //(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2))
        //area formed by triangle is 0 for straight line

        int n=coordinates.size();
        
        auto isStraight = [](int x1,int x2, int x3, int y1, int y2, int y3){
            int res = (x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2));
            return res == 0;
        };
        
        for( int i=0; i < n-2; i++ ) {
            
            auto co1 = coordinates[i];
            auto co2 = coordinates[i+1];
            auto co3 = coordinates[i+2];
            
            if(!isStraight(co1[0],co2[0],co3[0], co1[1],co2[1],co3[1]))
                return false;
        }
        
	  return true;
    } 
} s;

int main(){
    io();
    vector<vector<int>> coordinates = 
    			{{1,2},{2,3},{3,4},{4,5},{5,6},{6,7}};
    cout << " Solution: "
    <<debugger::boolify(s.checkStraightLine(coordinates))<<endl;

    return 0;
}

