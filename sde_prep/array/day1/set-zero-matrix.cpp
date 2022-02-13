#include "io/io.h"

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {

        //* TC: O(n2), SC: O(1)
        int m= matrix.size();
        int n=matrix[0].size();
        string row = "",col="";
        
        for(int i=0; i<m; i++)    
            for(int j=0;j<n;j++)
                    if(matrix[i][j]==0){
                        row+= to_string(i)+".";
                        col+= to_string(j)+".";
                    }

        
        int i=0;
        string r="";
        while(row[i]!='\0'){
           
            if(row[i]=='.'){
                for(int j=0;j<n;j++)
                    matrix[stoi(r)][j] = 0;
               r="";
            }
            else
             r+=row[i];
            i++;
        }

        i=0;
        while(col[i]!='\0'){
           
            if(col[i]=='.'){
                for(int j=0;j<m;j++)
                    matrix[j][stoi(r)] = 0;
               r="";
            }
            else
             r+=col[i];
            
            i++;
        }

     
    }
}s;


int main(){
    io();
    cout << " Solution: "   << endl;

    vector<vector<int>> matrix = {{1,1,1},{1,0,1},{1,1,1}};
    s.setZeroes(matrix);
    display(matrix);

    return 0;
}

