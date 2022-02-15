#include "io/io.h"

class Solution{

public:

 void dfsRecursive(unordered_map<char,vector<char>> graph, char source){
     //* TC: O(), SC: O() 

    cout<<source<<" ";
    for(auto neighbour: graph[source])
        dfsRecursive(graph,neighbour);

 }   

 void dfsIterative(unordered_map<char,vector<char>> graph, char source){

    stack<char> s;
    s.push(source);

    while(s.size()){
        auto curr = s.top();
        s.pop();

        cout<<curr<<" ";
        for(auto neighbour : graph[curr])
            s.push(neighbour);
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

    cout<<"Recursive: ";s.dfsRecursive(graph,'a');cout<<endl;
    cout<<"Iterative: ";s.dfsIterative(graph,'a');cout<<endl;
    return 0;
}

