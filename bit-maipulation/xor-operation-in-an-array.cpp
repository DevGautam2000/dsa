#include "io/io.h"

class Solution{
public:
	int xorOperation(int n, int start) {
        
        vector<int> ele(n);
        
        for(int i=0; i<n; i++)
            ele.push_back(start + 2*i);
        
        int ans=0;
        
        for(auto i: ele)
            ans ^= i;
        
        
        return ans;
    } 
} s;

int main(){
    io();
    cout << " Solution: " << s.xorOperation(5,0) << endl;

    return 0;
}

