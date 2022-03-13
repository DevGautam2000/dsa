#include "io/io.h"

class Solution{
public:
int digArtifacts(int n, vector<vector<int>>& artifacts, vector<vector<int>>& dig) {
        unordered_set<string> vis;
        for (auto cell : dig) {
            vis.insert(to_string(cell[0]) + "$" + to_string(cell[1]));
        }
        int cnt = 0;
        for (auto art : artifacts) {
            bool all = true;
            for (int i = art[0]; i <= art[2]; i++) {
                for (int j = art[1]; j <= art[3]; j++) {
                    string key = to_string(i) + "$" + to_string(j);
                    if (!vis.count(key)) {
                        all = false;
                        break;
                    }
                }
            }
            if (all) cnt++;
        }
        return cnt;
    }  
} s;

int main(){
    io();
    int n=2;
    vector<vector<int>> artifacts={{0,0,0,0},{0,1,1,1}}; 
    vector<vector<int>> dig = {{0,0},{0,1}};

    cout << " Solution: " << s.digArtifacts(n,artifacts,dig)  << endl;

    return 0;
}

