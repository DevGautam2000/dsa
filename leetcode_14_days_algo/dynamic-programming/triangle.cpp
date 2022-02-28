#include "io/io.h"

class Solution{
public:

int minimumTotal(vector<vector<int>>& triangle) {
    
    int m = triangle.size();
    vector<int> dp(m+1,0);
        
    for(int row = m-1; row>=0; row--)
        for(int col=0; col< row + 1; col++)
            dp[col] = triangle[row][col] + min(dp[col] , dp[col+1]);
        

     return dp[0];
    }


int minimumTotalLinearSpace(vector<vector<int>> &triangle) {
    
   	//* TC: O(n^2), SC: O(1)
	int m = triangle.size();
	        
	for(int row = m-2; row>=0; row--)
	  for(int col=0; col<=row; col++)
		triangle[row][col] += min(triangle[row+1][col] , triangle[row+1][col+1]);
	        

   return triangle[0][0];
  }
} s;

int main(){
    io();
    vector<vector<int>> triangle= {{2},{3,4},{6,5,7},{4,1,8,3}};
	cout << " O(n)Space Solution: " <<  s.minimumTotal(triangle) << endl;

	triangle= {{2},{3,4},{6,5,7},{4,1,8,3}};
    cout << " O(1)Space Solution: " <<  s.minimumTotalLinearSpace(triangle) << endl;

    return 0;
}

