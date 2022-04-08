#include "io/io.h"

class Solution{
public:

 vector<vector<int>> printSubset(vector<int>& input){  
 
	 vector<vector<int>> v;
	 vector<int> op;

	 function<void (int)> solve = [&](int i){
	 		if(i==input.size()){
	 			v.push_back(op);
	 			return;
	 		}

			op.push_back(input[i]);
			solve(i+1);

			op.pop_back();
			solve(i+1);
	 };

 	solve(0);
 	return v;
  }
} s;



int main(){
    io();
    vector<int> input={1,4,5,7};
    auto res = s.printSubset(input);
    console::display(res);

    return 0;
}

