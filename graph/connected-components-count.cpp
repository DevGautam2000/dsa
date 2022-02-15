#include "io/io.h"

class Solution{

	unordered_set<int> visited;
public:

 bool explore(unordered_map<int,vector<int>> graph , int curr){

 	//if curr node in set no not visit
 	if(visited.count(curr)) return false; 

 	visited.insert(curr); //add to set
 	for(auto node : graph[curr]) //perform dfs until no path
 		explore(graph,node);

 	return true;
 }
 int countConnetedComponent(unordered_map<int,vector<int>> graph){ 

    //* TC: O(e), SC: O(n) 
    //* #e [no. of edges]
    int count=0;

    // for each index component perform dfs
    for(auto it: graph)
    	if(explore(graph, it.first))
    		count++;

    return count;
 }   
} s;

int main(){
    io();
    

    unordered_map<int,vector<int>> graph = {
    	{0 , {8, 1, 5} },
    	{1 , {0} },
    	{5 , {0, 8} },
    	{8 , {0, 5} },
    	{2 , {3, 4} },
    	{3 , {2, 4} },
    	{4 , {3, 2} },
    };
  
    cout << " Solution: The count of the connected components are: " <<s.countConnetedComponent(graph)<<endl;

  return 0;
}

