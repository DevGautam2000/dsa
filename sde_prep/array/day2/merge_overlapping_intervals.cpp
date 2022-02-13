#include "io/io.h"

class Solution{
public:

 vector<vector<int>> merge(vector<vector<int>>& intervals) { 
    //* TC: O(), SC: O() 

 	vector<vector<int>> res;

 	sort(intervals.begin(),intervals.end());

 	res.push_back(intervals[0]);

 	for (int i = 1; i < intervals.size(); ++i)
 	{
 		if(res.back()[1] >= intervals[i][0])
 			res.back()[1]=max(res.back()[1],intervals[i][1]);
 		else
 			res.push_back(intervals[i]);
 	}

 	return res;
 }   
} s;

int main(){
    io();
    cout << " Solution: " << endl;
    vector<vector<int>> intervals = {{1,3},{2,6},{8,10},{15,18}};
    auto res = s.merge(intervals);
    display(res);
    return 0;
}

