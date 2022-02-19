#include "io/io.h"

class Solution{
public:
vector<long long> maximumEvenSplit(long long finalSum) {
        
       
        
        if(finalSum&1)
            return {};
        
        vector<long long> ans;
        
        long long ne=2; //ne: nextEvenNum
        
        while(finalSum){
            if(finalSum - ne < 0){
                ans.back() += finalSum;
                break;
            }
            
            finalSum -= ne;
            ans.push_back(ne);
            ne += 2;
            
        }
        
        
        return ans;
    } 
} s;

int main(){
    io();
    cout << " Solution: " << endl;
    auto res = s.maximumEvenSplit(12);
    console::display(res);

    return 0;
}

