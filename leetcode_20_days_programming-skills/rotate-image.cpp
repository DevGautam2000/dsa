#include "io/io.h"

class Solution{
public:
void rotate(vector<vector<int>>& matrix) {
        
        auto transpose = [&](){
            
            for(int row=0; row<matrix.size(); row++)
                for(int col=row; col<matrix[0].size(); col++)
                    swap(matrix[row][col],matrix[col][row]);
            
        };
        
        transpose(); //apply transpose to the matrix once
        
        for(auto &vec: matrix)
            reverse(vec.begin(),vec.end());
        

    }  
} s;

int main(){
    io();
    vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
    cout << " Solution: "  << endl;
    s.rotate(matrix);
    console::display(matrix);

    return 0;
}

