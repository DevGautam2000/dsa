#include "io/io.h"

class Solution{
public:

 int minimumCost(vector<int>& cost) 
    {
        int n=cost.size();
        int ans = 0;

        sort(cost.begin(),cost.end());

        out(ans);
        int i=n-1;

        while(i>=0){
        	if(i>=0) ans += cost[i--]; //buy first
        	if(i>=0) ans += cost[i--]; //buy second

        	i--; 

        }

        return ans;
    }
} s;

int main(){
    io();
    vector<int> cost = {6,5,7,9,2,2};
    cout << " Solution: " <<  s.minimumCost(cost) << endl;

    return 0;
}

