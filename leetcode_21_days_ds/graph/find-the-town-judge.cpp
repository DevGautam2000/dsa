#include "io/io.h"

class Solution{
public:

 int findJudge(int n, vector<vector<int>>& trust) {
        
        //* TC: O(n), SC: O(n)

        vector<int> count(n + 1, 0);
        for (auto& vec : trust)
            count[vec[0]]--, count[vec[1]]++;
        
        for (int i = 1; i <= n; ++i)
            if (count[i] == n - 1) return i;
        
        return -1;
    } 
} s;

int main(){

	//! intuition:
	//! the point who has no out-degree and in-degree == N - 1
    io();
    int n=3;
    vector<vector<int>> trust = {{1,3},{2,3},{3,1}};
    cout << " Solution: " << s.findJudge(n,trust)  << endl;

    return 0;
}

