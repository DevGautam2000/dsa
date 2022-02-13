#include "io/io.h"

class Solution{
public:

 vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
         //Answer vector
        vector<vector<int>> result(k);
        //maxheap storage initialization
        priority_queue<vector<int>> maxHeap;
        //Construction of maxheap
        for (auto& p : points) {
            int x = p[0], y = p[1];
            maxHeap.push({x*x + y*y, x, y});
            if (maxHeap.size() > k) {
                maxHeap.pop();
            }
        }
        
        for (int i = 0; i < k; ++i) {
            vector<int> top = maxHeap.top();
            maxHeap.pop();
            result[i] = {top[1], top[2]};
        }
        
        return result;
    }  
} s;

int main(){
    io();
    cout << " Solution: " << endl;
    vector<vector<int>> points={{1,3},{-2,2}};
    int k=1;
    auto res = s.kClosest(points , k);

    display(res);

    return 0;
}

