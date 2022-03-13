#include "io/io.h"

class Solution{
public:
vector<int> sortByBits(vector<int>& arr) {
    
	//* TC: O(nlogn), SC: O(n)

    vector<pair<int,int>> m;

    auto findNumSetBit = [](int b){
        int count = 0;

        while (b != 0)
            b &= (b - 1),count++;

        return count;
        };
        
    for(auto n:arr)
        m.emplace_back(n,findNumSetBit(n));
        
    sort(m.begin(),m.end(),[&](auto a, auto b){
            auto [f1,s1] = a;
            auto [f2,s2] = b;
            
            if(s1==s2) return f1<f2;
            return s1< s2;
    });
            
    int i=0;
    for(auto [f,_] : m)
        arr[i++]=f;
           
    return arr;
    
    }  
} s;

int main(){
    io();
    vector<int> arr={0,1,2,3,4,5,6,7,8};
    cout << " Solution: " << endl;
    auto res = s.sortByBits(arr);
    console::display(res);

    return 0;
}

