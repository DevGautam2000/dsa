#include "io/io.h"

class Solution{

	set<char> visited;
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


 int shortestPath(vector<vector<char>> edges ,char src, char dst){
     //* TC: O(e), SC: O(n) x

 	auto graph = buildGraph(edges);

 	queue<pair<char,int>> q;
 	q.push({src,0});
 	visited.insert(src);

 	while(q.size()){

 		auto curr = q.front();
 		q.pop();

 		if(curr.first == dst) return curr.second;

 		for(auto neighbour : graph[curr.first])
 			if(!visited.count(neighbour)){
 				
 			 visited.insert(curr.first);
 			 q.push({neighbour,curr.second+1});
 			}
 	}

 	return -1;
 }   
} s;

int main(){
    io();
    cout << " Solution: " <<  endl;
    vector<vector<char>>  edges= {
    	{'w','x'},
    	{'x','y'},
    	{'z','y'},
    	{'z','v'},
    	{'w','v'}
    };
    char source = 'w';
    char destination = 'z';
    cout << s.shortestPath(edges,source,destination);

    return 0;
}

