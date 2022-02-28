#include "io/io.h"

class Solution{
public:

 bool canMakeArithmeticProgression(vector<int>& arr) {
        //* TC: O(nlogn), SC: O(1)
        sort(arr.begin(),arr.end());
        
        bool isAp=true;
        for(int i=0; i<arr.size()-2; i++)
            if(arr[i]-arr[i+1] != arr[i+1]-arr[i+2])
                isAp = false;
            
        return isAp;
    } 
} s;

int main(){
    io();

    vector<int> arr = {3,5,1};
    cout << " Solution: " << 
    debugger::boolify(s.canMakeArithmeticProgression(arr))  << endl;

    return 0;
}

