#include "io/io.h"

class Solution{
public:
int maximumWealth(vector<vector<int>>& accounts) {
        //* TC: O(n2), SC: O(1)
        int sum=0;
        for(auto acc: accounts)
         sum = max(sum,accumulate(acc.begin(), acc.end(), 0));
        
        return sum;
    }
} s;

int main(){
    io();
    vector<vector<int>> accounts = {{1,2,3},{3,2,1}};
    cout << " Solution: " <<  s.maximumWealth(accounts) << endl;

    return 0;
}

