#include "io/io.h"

class Solution{
public:

 void rotate(vector<vector<int>>& matrix) {
        
        //* TC: O(n2), SC: O(1)
        //doing a transpose of the matrix
        int n=matrix.size();
        for(int i=0; i<n; i++)    
            for(int j=i; j<n ;j++)
                swap(matrix[i][j],matrix[j][i]);
        
         
        //using two pointer approach
       
        
        for(int i=0; i<n ;i++){
            
            int left=0, right=n-1;
            while(left<right)
                swap(matrix[i][left++],matrix[i][right--]);
            
        }   

    }
} s;

int main(){
    io();
    cout << " Solution: " <<endl;

    vector<vector<int>> matrix = {{5,1,9,11},{2,4,8,10},{13,3,6,7},{15,14,12,16}};
    s.rotate(matrix);
    display(matrix);

    return 0;
}

