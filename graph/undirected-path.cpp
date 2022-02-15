#include "io/io.h"

class Solution{

unordered_set<char> visited;
public:

 unordered_map<char,vector<char>> buildGraph(vector<vector<char>> edges){
 	unordered_map<char,vector<char>> graph;

 	for(auto edge : edges){
 		auto a = edge[0];
 		auto b = edge[1];

 		if(!graph.count(a)) graph[a] = {};
 		if(!graph.count(b)) graph[b] = {};

 		graph[a].push_back(b);
 		graph[b].push_back(a);
 	}

 	return graph;
 }

 bool hasPath(unordered_map<char,vector<char>> graph , char src, char dst){
 	if(src == dst) return true;

 	if(visited.count(src)) return false;

 	visited.insert(src);
 	for(auto neighbour : graph[src])
 		if(hasPath(graph,neighbour,dst))
 			return true;

 	return false;
 }

 bool undrectedPath(vector<vector<char>> edges, char nodeA, char nodeB){

     //* TC: O(), SC: O() 

 	// step one: create the adjacency list
 	auto graph = buildGraph(edges);

 	//perform dfs on graph
 	return hasPath(graph,nodeA,nodeB);
 }   


} s;

int main(){
    io();
    cout << " Solution: " << endl;

    vector<vector<char>>  edges= {
    	{'i','j'},
    	{'k','i'},
    	{'m','k'},
    	{'k','l'},
    	{'o','n'}
    };
    char nodeA='j';
    char nodeB='m';

    auto res = s.undrectedPath(edges,nodeA,nodeB);
    cout<<debugger::boolify(res)<<endl;

    return 0;
}

