#include "io/io.h"

class Solution
{
public:
    vector<vector<int>> merge(vector<vector<int>> &intervals)
    { //*TC: O(nlogn), SC: O(n2)
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> res;
        int n = intervals.size();
        res.push_back(intervals[0]);

        for (int i = 1; i < n; i++)
            if (res.back()[1] >= intervals[i][0])
                res.back()[1] = max(res.back()[1], intervals[i][1]);
            else
                res.push_back({intervals[i]});

        return res;
    }
} s;

int main()
{
    io();
    cout << " Solution: \n";
    vector<vector<int>> n = {{1, 4}, {0, 4}};

    auto res = s.merge(n);

    for (auto vec : res)
    {
        display(vec);
        cout << endl;
    }

    return 0;
}
