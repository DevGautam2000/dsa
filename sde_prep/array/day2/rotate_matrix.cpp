#include "io/io.h"

class Solution{
public:

 void rotate(vector<vector<int>>& matrix) { 
    //* TC: O(), SC: O() 
 	int n= matrix.size();
 	for (int i = 0; i < n; ++i)
 		for(int j=i; j<n; j++)
 			swap(matrix[i][j],matrix[j][i]);

 	for (int i = 0; i < n; ++i)
 		reverse(matrix[i].begin(),matrix[i].end());

 }   
} s;

int main(){
    io();
    vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
    cout << " Solution: " << endl;
    s.rotate(matrix);
    
   out(matrix); 
   console::display(matrix);
    return 0;
}

