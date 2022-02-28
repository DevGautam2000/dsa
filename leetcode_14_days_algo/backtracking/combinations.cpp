#include "io/io.h"

class Solution{
public:

 //recursive solution
 vector<vector<int>> combine(int n, int k) {
 	//* TC: O(n^k), SC: O(n)
        if(n<k) return {};

        vector<vector<int>>res; //neglecting space for this vector
        vector<int> temp;

        function<void (int)> backtrack;

        //using recursive lambda
        backtrack = [&](int start)->void{
            if(temp.size()==k){
                res.push_back(temp);
                return;
            }
            
            for(int i = start;i<n;i++){
                temp.push_back(i+1);
                backtrack(i+1);
                temp.pop_back();
            }
        };
        
        
        backtrack(0);
        return res;
    }

  //iterative solution
    vector<vector<int>> combineIterative(int n, int k) {
		vector<vector<int>> res;
		//* TC: O(n), SC: O(k)
		int i = 0;
		vector<int> p(k, 0);
		while (i >= 0) {
			p[i]++;
			if (p[i] > n) --i;
			else if(i == k - 1) res.push_back(p);
			else 
			    ++i,p[i] = p[i - 1];
			
		}
		return res;
	}
} s;

int main(){
    io();
    int n=4;
    int k=2;
    auto recursive = s.combine(n,k);
    auto iterative = s.combineIterative(n,k);
    cout << " Recursive Solution: ";el;console::display(recursive);el;
    cout << " Iterative Solution: ";el;console::display(iterative);


    return 0;
}

