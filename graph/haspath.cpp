#include "io/io.h"

class Solution{

    
public:
 //using dfs
 bool hasPath(unordered_map<char,vector<char>> graph, char source,char dst){
     //* TC: O(), SC: O() 

    if(source == dst) return true;
    for(auto neighbour: graph[source])
        if(hasPath(graph,neighbour,dst))
            return true;

    return false;

 }   

//using bfs
bool hasPathBfs(unordered_map<char,vector<char>> graph, char source,char dst){

    queue<char> q;
    q.push(source);

    while(q.size()){
        auto curr = q.front();
        q.pop();

        if(curr == dst) return true;

        for(auto neighbour : graph[curr])
            q.push(neighbour);
    }

    return false;
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
    char dst='d';
    cout<<"Recursive: "<<debugger::boolify(s.hasPath(graph,'a',dst))<<endl;
    cout<<"Recursive: "<<debugger::boolify(s.hasPathBfs(graph,'h',dst))<<endl;
    return 0;
}
