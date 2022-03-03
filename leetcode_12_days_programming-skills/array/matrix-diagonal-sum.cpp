#include "io/io.h"


class Solution{
public:

 int diagonalSum(vector<vector<int>>& mat) {
        
    //* TC: O(n), SC: O(1)

        int m=mat.size();
        int sum=0;
        for(int row=0; row<m; row++){
            sum += mat[row][row]; //? element at similar index [i==j]
            sum += mat[row][(m-1)-row]; //? element at [row+col = m-1]
        }
            
        int mid=m/2; //* if m is odd then the mid element is added twice hence substract the mid element
        return m&1 ? sum-mat[mid][mid] : sum;
    }
} s;

int main(){
    io();
    vector<vector<int>> mat= {{1,1,1,1},
				              {1,1,1,1},
				              {1,1,1,1},
				              {1,1,1,1}};
    cout << " Solution: " <<  s.diagonalSum(mat) << endl;
    return 0;
}

