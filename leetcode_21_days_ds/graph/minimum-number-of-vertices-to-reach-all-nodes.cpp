#include "io/io.h"

class Solution{
public:

 vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<bool> v(n,false);
        vector<int> ans;
        for(int i=0;i<edges.size();i++)
         v[edges[i][1]]=true;
        for(int i=0;i<n;i++)
            if(!v[i])
                ans.push_back(i);
        return ans;
        
    }   
} s;

int main(){
    io();
    int n=6;
    vector<vector<int>> edges={{0,1},{0,2},{2,5},{3,4},{4,2}};
    cout << " Solution: " << endl;
    auto res = s.findSmallestSetOfVertices(n,edges);
    display(res);

    return 0;
}

