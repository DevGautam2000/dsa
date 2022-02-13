#include "io/io.h"

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int m = matrix.size();
        int n = matrix[0].size();
        
        int begin=0,end=n-1;
        
        while(end >=0  && begin < m){

        	int val = matrix[begin][end];
            if(val == target) return true;
            else if(val < target) begin++;
            else end--;
        }
        
        return false;
    }
}s;

int main(){
    io();

    vector<vector<int>> matrix = {{1,4},{2,5}};
    int target = 2;
    cout << " Solution: " << boolify(s.searchMatrix(matrix,target))  << endl;

    return 0;
}

