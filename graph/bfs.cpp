#include "io/io.h"

class Solution{
public:


 void bfsIterative(unordered_map<char,vector<char>> graph , char source) {

 	queue<char> q;
 	q.push(source);

 	while(q.size()){
 		auto curr = q.front();
 		q.pop();
 		cout<<curr<<" ";
 		for(auto neighbour : graph[curr])
 			q.push(neighbour);
 	}
 } 
} s;

int main(){
    io();
    cout << " Solution: "  << endl;

    unordered_map<char,vector<char>> graph = {
    	{'a',{'b','c'}},
    	{'b',{'d'}},
    	{'c',{'e'}},
    	{'d',{'f'}},
    	{'e',{}},
    	{'f',{}},
    };

    cout<<"Iterative: ";s.bfsIterative(graph,'a');cout<<endl;

    return 0;
}

