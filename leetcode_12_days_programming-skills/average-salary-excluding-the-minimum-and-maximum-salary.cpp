#include "io/io.h"

class Solution{
public:

 	double average(vector<int>& salary) {
        //* TC:O(n) SC:O(1)
        int max = *max_element(salary.begin(),salary.end());
        int min = *min_element(salary.begin(),salary.end());
        double sum = accumulate(salary.begin(), salary.end(), 0);
        
     return (sum-(max+min))/(salary.size()-2);
    }
} s;

int main(){
    io();
    vector<int> salary = {4000,3000,1000,2000};
    cout << " Solution: " << s.average(salary)  << endl;

    return 0;
}

