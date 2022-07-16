#include "io/io.h"

class Solution{
public:

vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        
        vector<int> freq(1001,0);
        
        for(auto i: arr1)
            freq[i]++;
        
        vector<int> res;
        
        for(auto i: arr2){
            for(int j=0; j<freq[i]; j++)
                res.push_back(i);
            freq[i]=0;
        }
        
        
        
        for(int i=0; i<freq.size(); i++)
            for(int j=0; j<freq[i]; j++)
                res.push_back(i);
        
        return res;
        
    }
} s;

int main(){
    io();
    vector<int> arr1 = {2,3,1,3,2,4,6,7,9,2,19}, arr2 = {2,1,4,3,9,6};
    cout << " Solution: " << endl;
    auto res = s.relativeSortArray(arr1,arr2);
    console::display(res);

    
    return 0;

}

