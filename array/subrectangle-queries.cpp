#include "io/io.h"

class SubrectangleQueries {
    vector<vector<int>> mat;
public:
    SubrectangleQueries(vector<vector<int>>& rectangle) {
        mat = rectangle;
    }
    
    void updateSubrectangle(int row1, int col1, int row2, int col2, int newValue) {
        
        for(int i=row1; i<=row2; i++)
            for(int j=col1; j<=col2; j++)
                mat[i][j] = newValue;
        
    }
    
    int getValue(int row, int col) {
        return mat[row][col];
    }
};



int main(){
    io();
    cout << " Solution: " << endl;
    vector<vector<int>> rectangle = {{1,2,1},{4,3,4},{3,2,1},{1,1,1}};
    
 	SubrectangleQueries* obj = new SubrectangleQueries(rectangle);
 	cout<<obj->getValue(0,2)<<endl;
 	obj->updateSubrectangle(0,0,3,2,5);
 	cout<<obj->getValue(0,2)<<endl;
 	cout<<obj->getValue(3,1)<<endl;
 
    return 0;
}

